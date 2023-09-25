#include <iostream>
#include <vector>
using namespace std;
int main() {
int n;
cin>>n;
vector <int> neg,pos,zero;
vector<int> arr(n);
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)
{
    if (arr[i]==0)
    {
        zero.push_back(arr[i]);
    }
    else if(arr[i]<0)
    {
        neg.push_back(arr[i]);
    }
    else 
    {
        pos.push_back(arr[i]);
    }
}
if(pos.size()==0)
{
    pos.push_back(neg.back());
    neg.pop_back();
    pos.push_back(neg.back());
    neg.pop_back();
    
}
if(neg.size()%2==0)
{
    zero.push_back(neg.back());
    neg.pop_back();
}
cout<<neg.size()<<" ";
for(int v:neg)
{
    cout<<v<<" ";
}
cout<<pos.size()<<" ";
for(int p:pos)
{
 cout<<p<<" ";   
}
cout<<zero.size()<<" ";
for(int z:zero)
{
    cout<<z<<" ";
}
    return 0;
}
