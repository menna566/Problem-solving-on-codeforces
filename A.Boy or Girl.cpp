#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <string>
int main() 
{
   string x;
   cin>>x;
   set <char> s;
   for(auto it:x)
{
   s.insert(it) ;
}
if(s.size()%2==0)
{
    cout<<"CHAT WITH HER!";
}
else 
{
    cout<<"IGNORE HIM!";
}
    return 0;
}
