#include <iostream>
using namespace std;

int main() {
int yr;
cout<<"enter the year:";
cin>>yr;
if(yr%4==0)
{
	if(yr%100==0)
	{
		if(yr%400==0)
		{
			cout<<yr<<"is a leap year";
		}
		else
		{
			cout<<yr<<"is not a leap year";
		}
	}
	else
	{
		cout<<yr<<"is a leap year";
	}
}
else
{
	cout<<yr<<"is not a leap year";
}
	if(!cin)
	{
		cout<<"invalid input";
	}
}


	
