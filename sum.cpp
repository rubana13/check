#include <iostream>
using namespace std;

int main() {
int a,sum,i;
cout<<"enter the number :";
cin>>a;
for(i=1;i<=a;++i)
{
sum=sum+i;
}	cout<<"sum="<<sum;
if(!cin)
{
	cout<<"invalid input";
}

}
