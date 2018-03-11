#include <iostream>

using namespace std;

int main() {
	int a;
	int b;
	cout<<"A="<<endl;
	cout<<"B="<<endl;
	cin>>a>>b;
	int c;
	if(a,b<=100000)
	{
cout<<"Before swapping:"<<a<<" "<<b<<endl;
a=a^b;
b=a^b;
a=a^b;
	cout<<"After swapping:"<<a<<" "<<b;
	}
	else{
	    cout<<"Invalid input";
}
}
