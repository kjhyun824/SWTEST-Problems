#include <iostream>
#include <string>
using namespace std;

string findNum(string input) {
    string temp = "";
    int idx = -1;
    for(int i = 0; i < input.length() - 1; i++) {
        if(input[i] == input[i+1]) {
            idx = i;
            break;
        }
    }

    if(idx == -1) return input;

    for(int i = 0; i < input.length(); i++) {
        if (i == idx) i += 1;
        else temp += input[i];
    }
    return findNum(temp);
}

int main() {
    for(int caseNum = 0; caseNum < 10; caseNum++) {
        int len;
        string input;
        cin >> len;
        if (len == 0) {
            cout << "#" << caseNum + 1 << endl;
            continue;
        }
        cin >> input;
        input = findNum(input);

        cout << "#" << caseNum + 1 << " " << input << endl;
    }

    return 0;
}
