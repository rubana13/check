#include <iostream>
using namespace std;

int main() {
int n,i,r=0;
cout<<"enter the number :\n";
cin>>n;
if(n<=1000)
{
for(i=1;i<=n;i++)
{
	if(n%i==0)
	{
		r++;
	}
}
if(r==2)
{
	cout<<"it is prime";
}
else
{
	cout<<"It is not prime";
}
}


else
{
	cout<<"invalid input";
}

}
