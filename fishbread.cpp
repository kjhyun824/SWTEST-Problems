#include <iostream>
using namespace std;

int main() {
    int numCase;
    cin >> numCase;
    for(int caseNum = 0; caseNum < numCase; caseNum++) {
        int N,M,K;
        bool possible = true;
        cin >> N >> M >> K;
        int people[N], maxTime = -1;

        for(int i = 0; i < N; i++) {
            cin >> people[i];
            if(people[i] > maxTime) maxTime = people[i];
        }

        int maxNum = (maxTime + M - 1) / M;
        int numP[maxNum];

        for(int i = 0; i < maxNum; i++) numP[i] = 0;
        for(int i = 0; i < N; i++) numP[people[i]/M]++;

        if(numP[0] > 0) possible = false;
        
        int rest = K;
        for(int i = 1; i < maxNum; i++) {
            if(numP[i] > rest) {
                possible = false;
                break;
            }

            rest = K + (rest - numP[i]);
        }

        if(possible) cout << "#" << caseNum+1 << " Possible" << endl;
        else cout << "#" << caseNum+1 << " Impossible" << endl;
    }

    return 0;
}
