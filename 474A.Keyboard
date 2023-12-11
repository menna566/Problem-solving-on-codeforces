#include <iostream>
using namespace std;
int main() {
 string s="qwertyuiopasdfghjkl;zxcvbnm,./";
 char flag ;
 string word ;
 cin>>flag>>word;
 for(int i=0;i<word.size();i++)
 {
     int pos =s.find(word[i]);
     if(flag=='R')
     {
         cout<<s[pos-1];
     }
     else 
     {
         cout<<s[pos+1];
     }
 }
    return 0;
}
