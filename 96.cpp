#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int m,flag=0,i=2;
cin>>m;
      while(i<=floor(sqrt(n)))
              {
                    if(m%i==0)
                               flag=1;
                     i++;
              }
if(m==0 || m==1)
      cout<<"neither prime nor composite";
      else if(flag==0)
              cout<<m<<" is not a Composite number";
else
          cout<<m<<" is a Composite number";
}

