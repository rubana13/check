#include <iostream>

using namespace std;

int main() {
int a[100],i,k,count;
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
        count=1;
    }
}
if(count==1)
{
    cout<<"YES";
}
else
{
    cout<<"No";
}
}
