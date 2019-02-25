#include <bits/stdc++.h>
using namespace std;           

class Project {
public:
    string name;
    unordered_set<string> applicants;
    Project(string c_name) {
        name = c_name;
    }
};

void outputAnswers(vector<Project> projects, unordered_set<string> blacklistedApplicants) {
    vector<pair<int, string>> toBeSorted;
    //remove the applicants who are blacklisted
    for(Project project : projects) {
        int counter = 0;
        for(string applicant : project.applicants) {
            if(blacklistedApplicants.find(applicant) == blacklistedApplicants.end()) {
                counter++;
            }
        }
        toBeSorted.push_back({-counter, project.name});
    }
    //sort and output
    sort(toBeSorted.begin(), toBeSorted.end());
    for(pair<int, string> p : toBeSorted) {
        cout << p.second << ' ' << -p.first << endl;
    }
}

int main() {
    string input;
    unordered_set<string> applicantNames;
    unordered_set<string> blacklistedApplicants;
    vector<Project> projects;
    int index = -1;
    while(getline(cin, input)) {
        //input.pop_back();
        if(input.size() == 1 && isdigit(input[0])) {
            //finish test case, output and reset vars
            if(input[0] == '1') {
                outputAnswers(projects, blacklistedApplicants);
                //reset vars
                applicantNames.clear();
                blacklistedApplicants.clear();
                projects.clear();
            }
            //end program
            if(input[0] == '0') {
                return 0;
            }
        }
        //is a new project, push new project object into array
        if(isupper(input[0]) && isupper(input[input.size()-1])) {
            projects.push_back(Project(input));
            index = projects.size() - 1;
        } else { //else it's an applicant, determine if applicant should be blacklisted
            if(applicantNames.find(input) == applicantNames.end()) {
                applicantNames.insert(input);
            } else {
                if(projects[index].applicants.find(input) == projects[index].applicants.end()) {
                    blacklistedApplicants.insert(input);
                }
            }
            projects[index].applicants.insert(input);
        }
    }
}