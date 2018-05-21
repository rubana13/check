#include <iostream>
#include <string.h>
using namespace std;
int main() {
int A,B,C,ans;
int a,d,n,i;
cin>>A>>B>>C;
a=A;
d=B;
n=C;
for(i=0;i<n;i++)
    {
ans=ans+(a+i*d);
}
cout<<ans;

}
