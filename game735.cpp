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

        sort(arr,arr+7);

        set<int> possibles;
        for(int i = 0; i < 7; i++) {
            for(int j = i+1; j < 7; j++) {
                for(int k = j+1; k < 7; k++) {
                    possibles.insert(arr[i] + arr[j] + arr[k]);
                }
            }
        }

        std::set<int>::iterator it = possibles.begin();
        std::advance(it, possibles.size()-5);
        Answer = *it;

        cout << "#" << (T+1) << " ";
        cout << Answer << endl;
    }
    return 0;
}
