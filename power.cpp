#include <iostream>
using namespace std;

int main() {
int n,p,value=1,i;
cout<<"enter the number :\n";
cin>>n;
cout<<"Enter the power:\n";
cin>>p;
for(i=p;i>0;i--)
{
value=value*n;
}
cout<<value;
if(!cin)
{
	cout<<"invalid input";
}

}
