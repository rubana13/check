#include <iostream>

using namespace std;

int main() {
	int x,result;
	int y;
	int z;
	cout<<"X="<<endl;
	cout<<"Y="<<endl;
	cout<<"Z="<<endl;
	cin>>x>>y>>z;
	if(x<100&&y<100&&z<100)
	{
result=(x*y)/z;
cout<<result;
}
	else{
	    cout<<"Invalid input";
	}
}
