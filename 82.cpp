#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float l;
	float b;
	float A;
	cin>>l>>b;
	A=l*b;
cout<<"Area = " <<fixed<<setprecision(5)<<A;
if(!cin)
{
cout<<"Invalid input";
}
}
