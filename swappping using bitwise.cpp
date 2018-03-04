#include <iostream>

using namespace std;

int main() {
	int x;
	int y;
	cout<<"X="<<endl;
	cout<<"Y="<<endl;
	cin>>x>>y;
	if(x,y<=100000)
	{
cout<<"Before swapping:"<<x<<" "<<y<<endl;
x=x^y;
y=x^y;
x=x^y;
	cout<<"After swapping:"<<x<<" "<<y;
	}
	else{
	    cout<<"Invalid input";
	}
}
