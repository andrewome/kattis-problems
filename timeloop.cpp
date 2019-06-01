#include <stdio.h>

int main() {
    int N, counter = 1;
    scanf("%d", &N);
    for(int i = 0; i < N; i++, counter++) {
        printf("%d %s\n", counter, "Abracadabra");
    }
    return 0;
}