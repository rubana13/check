#include <iostream>

using namespace std;

int main() {
int n;
	cin>>n;
	if(n<=10000)
	{
	while(n%10!=0)
	{
		n++;
	}
	cout<<n;
	}
	else
	{
	    cout<<"input out of range";
	}
	return 0;
}
