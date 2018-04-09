#include <iostream>
using namespace std;

int main() {
    int numCase;
    cin >> numCase;

    for(int caseN = 0; caseN < numCase; caseN++) {
        int size;
        int total = 0;
        cin >> size;
        int center = size / 2;

        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                char _temp;
                cin >> _temp;
                int temp = _temp - '0';
                if ( i <= center )  {
                    int start = center - i, end = center + i;
                    if(j >= start && j <= end) {
                        total += temp;
                    }
                } else {
                    int diff = i - center;
                    int start = center - i, end = center + i;
                    if(j >= start && j <= end) {
                        total += temp;
                    }
                }
            }
        }

        cout << total << endl;
    }
}
