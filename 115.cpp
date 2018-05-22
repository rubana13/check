#include <iostream>
#include <string.h>
using namespace std;

int main() {
int a[100],i,k,j;
int n;
cin>>n;
cin>>k;
for(i=0;i<=n;i++)
{
    cin>>a[i];
}
for(i = 1;i < n; ++i)
    {
      if(a[0] < a[i])
      {
           a[j] = a[0];
      }
   }
   for(j=0;j<=a[j];j++)
   {
    if(a[j]==a[k])
    {
    cout<< a[j];
    break;
    }
   }
}

