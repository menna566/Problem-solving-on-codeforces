#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
const int N = 1000 + 5;
int arr[N];
int main() {
int n;
vector<int>v;
cin>>n;
 
for (int i = 1; i <=n; i++) {
    cin>>arr[i];
}
for(int j=1;j<=n;j++)
{
    if(arr[j]>=arr[j+1])
    {
     v.push_back(arr[j]);
    }
    
}
cout<<v.size()<< "\n";
for(int val:v)
{
    cout<<val<<" ";
 
}
}
