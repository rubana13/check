#include <iostream>
using namespace std;

int main() {
	int n,q;
	cout<<"Enter the starting no:";
	cin>>n;
	cout<<"Enter the ending no:";
	cin>>q;
	if((n<=100000)&&(q<=100000))
	{
	for(;n<=q;)
	{
		cout<<n<<endl;
		n=n+2;
	}
	}
	else
	{
		cout<<"Invalid input";
	}
}
