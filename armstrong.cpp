#include <iostream>
using namespace std;

int main() {
int num,remainder,sum=0,temp;
cout<<"Enter the number";
cin>>num;
if(num<=100000)
{
temp=num;
while(num>0)
{
	remainder=num%10;
	sum=sum+(remainder*remainder*remainder);
	num=num/10;
}
if(temp==sum)
{
	cout<<"Yes";
}
else
{
	cout<<"No";
}
}
if(!cin)
{
	cout<<"Invalid input";
}
	return 0;
}
