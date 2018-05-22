#include <iostream>

using namespace std;

int main() {
int a[100],i,k,count=0;
int n;
cin>>n;
cin>>k;
for(i=0;i<=n;i++)
{
    cin>>a[i];
}
for(i=0;i<=n;i++)
{
    if(a[i]==k)
    {
        count++;
    }
}
cout<<count;
}
