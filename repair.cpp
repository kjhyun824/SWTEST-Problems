#include <iostream>
#include <string>
using namespace std;

int main() {
    int numCase;
    cin >> numCase;
    for(int caseNum = 0; caseNum < numCase; caseNum++) {
        string input;
        cin >> input;
        int curr = 0, change = 0;
        for(int i = 0; i < input.length(); i++) {
            if(curr == 0 && input[i] == '1') {
                change++;
                curr = 1;
            } else if (curr == 1 && input[i] == '0') {
                change++;
                curr = 0;
            }
        }

        cout << "#" << caseNum + 1 << " " << change << endl;
    }

    return 0;
}
