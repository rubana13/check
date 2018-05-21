#include <iostream>
#include <string.h>
using namespace std;
int main() {
int n;
cin>>n;
if(n<=10)
{
while(n%2==0)
{
	n=n/2;
}
}
else{cout<<"Invalid input";}
cout<<n;
}
