// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
int n,d,x;
cin>>n>>d;
queue <int> q;
for(int i=0;i<n;i++)
{   cin>>x;
    q.push(x);
}
for(int i=0;i<d;i++)
{
    q.push(q.front());
    q.pop();
}

for(int v=0;v<n;v++)
{
    cout<<q.front()<<" ";
    q.pop();
}
    return 0;
}
