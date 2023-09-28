#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin, s);
    set<char>se;
    for(auto j:s)
    { 
        if(j >='a' && j <='z')
        {
        se.insert(j);
        }
    }
 
 cout<<se.size();
 
    return 0;
}
