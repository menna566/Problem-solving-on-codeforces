#Given two strings, determine if they share a common substring. A substring may be as small as one character.


#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    string str1, str2;

    cin >> t;
    while (t--) {
        cin >> str1 >> str2;
        unordered_set<char> s1(str1.begin(), str1.end());
        unordered_set<char> s2(str2.begin(), str2.end());

        bool commonCharacter = false;

        for (char i : s1) {
            if (s2.count(i)) {
                commonCharacter = true;
                break;
            }
        }

        if (commonCharacter) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
