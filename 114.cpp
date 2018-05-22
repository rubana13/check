#include <iostream>
#include <string>
using namespace std;

int main() {
int a[100],i,k,m;
int n;
cin>>n;
cin>>k;
for(i=0;i<=n;i++)
{
    cin>>a[i];
}
for(i=0;i<=n;i++)
{
    if(a[i]%2==1)
    {
       
     cout<<a[i]<<" ";
      a[k]=a[i];  
    }
}

}
