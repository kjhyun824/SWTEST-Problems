#include <iostream>
#include <string>
#include <set>
using namespace std;

struct sortByLen
{
    bool operator () (const std::string & lhs, const std::string & rhs)
    {
        return (lhs < rhs) ; 
    }
};

int main() {
    int numCase;
    cin >> numCase;
    for(int caseNum = 0; caseNum < numCase; caseNum++) {
        int K;
        string input;
        cin >> K >> input;
        set<string, sortByLen> substrings;

        for(int i = 0; i < input.length(); i++) {
            for(int j = 1; j <= input.length() - (i); j++) {
                substrings.insert(input.substr(i,j));
            }
        }
        
        string output;
        if(K > substrings.size()) output = "none";
        else {
            set<string, sortByLen>::iterator it = substrings.begin();
            std::advance(it,K-1);
            output = *it;
        }
        cout << "#" << caseNum + 1 << " " << output << endl;
    }

    return 0;
}
