#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int n,flag=0,i=2;
cin>>n;
      while(i<=floor(sqrt(n)))
              {
                    if(n%i==0)
                               flag=1;
                     i++;
              }
if(n==0 || n==1)
      cout<<"neither prime nor composite";
      else if(flag==0)
              cout<<n<<" is not a Composite number";
else
          cout<<n<<" is a Composite number";
}
