#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    set<char>se;
    for(auto j:s)
    {
        se.insert(j);
    }
 if(se.size()%2==0)
 {
     cout<< "CHAT WITH HER!";
 }
 else
 {
 cout<<"IGNORE HIM!";
 }
    return 0;
}
