#include <iostream>
using namespace std;

int main(){
	int n,f=1,i ;
	cout<<"Enter the number:";
	cin>>n;
	for(i=1;i<=n;++i)
	{
		f*=i;
}
	cout<<f;
	if(!cin)
	{
		cout<<"Invalid input";
	}

}
