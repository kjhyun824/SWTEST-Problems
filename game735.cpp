/*
 * =====================================================================================
 *
 *       Filename:  game735.cpp
 *
 *    Description:  Among 7 numbers, sum 3 numbers -> 5th largest number
 *
 *        Version:  1.0
 *        Created:  10/18/18 17:24:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Junghyun Kim
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int Answer;
int arr[7];

int main() {
    int testCase;
    cin >> testCase;

    for(int T = 0; T < testCase; T++) {
        Answer = 0;

        for(int i = 0; i < 7; i++) {
            cin >> arr[i];
        }

        sort(arr, arr+7);

        set<int> possibles;
        possibles.insert(arr[0] + arr[5] + arr[6]); // 1,6,7
        possibles.insert(arr[1] + arr[3] + arr[6]); // 2,4,7
        possibles.insert(arr[1] + arr[4] + arr[6]); // 2,5,7
        possibles.insert(arr[1] + arr[5] + arr[6]); // 2,6,7
        possibles.insert(arr[2] + arr[3] + arr[6]); // 3,4,7
        possibles.insert(arr[2] + arr[4] + arr[5]); // 3,5,6
        possibles.insert(arr[2] + arr[4] + arr[6]); // 3,5,7
        possibles.insert(arr[2] + arr[5] + arr[6]); // 3,6,7
        possibles.insert(arr[3] + arr[4] + arr[5]); // 4,5,6
        possibles.insert(arr[3] + arr[4] + arr[6]); // 4,5,7

        std::set<int>::iterator it = possibles.begin();
        std::advance(it, possibles.size()-3);
        Answer = *it;

        cout << "#" << (T+1) << " ";
        cout << Answer << endl;
    }
    return 0;
}
