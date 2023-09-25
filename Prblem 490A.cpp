#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
int n,x;
cin>>n;
vector <int> p,maths,pe;
for(int i=1;i<=n;i++)
{   cin>>x;
    if (x==1)
    {
        p.push_back(i);
    }
    else if(x==2)
    {
        maths.push_back(i);
    }
    else if(x==3) 
    {
        pe.push_back(i);
    }
}
 int note = min(maths.size(),  min(p.size(),  pe.size()));
cout<< note << "\n";
for(int i=0;i<note;i++)
{
cout<< p[i] << " "  << maths[i] << " " <<  pe[i]  << "\n";
}
 
  return 0;
}
