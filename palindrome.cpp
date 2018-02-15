#include <iostream>
using namespace std;

int main() {
int n,i,r=0,remainder;
cout<<"enter the number :\n";
cin>>n;
i=n;
while(n!=0)
{
	remainder=n%10;
	r=r*10+remainder;
	n/=10;
}
if(i==r)
{
	cout<<"It is a palindrome";
}
else
{
	cout<<"It is not a palindrome";
}
if(!cin)
{
	cout<<"invalid input";
}

}
