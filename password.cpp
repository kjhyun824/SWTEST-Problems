#include <iostream>
#include <string>
using namespace std;

typedef unsigned long long ULL;

int main() {
    int numCase;
    cin >> numCase;
    for(int caseNum = 0; caseNum < numCase; caseNum++) {
        int N, K;
        cin >> N;
        string numArr[N];
        for(int i = 0; i < N; i++) {
            int temp;
            cin >> temp;
            numArr[i] = to_string(temp);
        }
        cin >> K;

        for(int i = 0; i < N; i++) {
            cout << numArr[i] << endl;
        }
    }

    return 0;
}
