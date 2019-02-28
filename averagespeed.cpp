#include <bits/stdc++.h>
using namespace std;

int convertToSeconds(int h, int m, int s) {
    int output = s;
    output += m * 60;
    output += h * 60 * 60;
    return output;
}

vector<int> parseInput(string input) {
    vector<int> output(4);
    string _time;
    size_t pos = input.find(" ");

    //determine if it's a update to speed or a query
    if(pos == string::npos) {
        _time = input;
        output[3] = -1;
    } else {
        _time = input.substr(0, pos);
        input.erase(0, pos + 1);
        output[3] = stoi(input);
    }

    //parse the time
    pos = _time.find(":");
    output[0] = stoi(_time.substr(0, pos));
    _time.erase(0, pos + 1);
    pos = _time.find(":");
    output[1] = stoi(_time.substr(0, pos));
    _time.erase(0, pos + 1);
    output[2] = stoi(_time);
    return output;
}

int main() {
    string input;
    int prevTime = 0, prevSpeed = 0;
    double currentDistance = 0;
    while(getline(cin, input)) {
        vector<int> parsedInput(4);
        parsedInput = parseInput(input);
        int curTime = convertToSeconds(parsedInput[0], parsedInput[1], parsedInput[2]);
        int speed = parsedInput[3];

        //update distanced moved; speed x distance
        double speedInKmps = prevSpeed/(60.0*60.0);
        double distancedTravelled = (curTime - prevTime) * speedInKmps;
        currentDistance += distancedTravelled;
        //query
        if(speed == -1) {
            cout << setprecision(2) << fixed << input << ' ' << currentDistance << " km" << endl;
        } else { //update speed
            prevSpeed = speed;
        }
        //update time
        prevTime = curTime;
    }
}