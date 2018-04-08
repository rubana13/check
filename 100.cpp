#include <iostream>
using namespace std;

int main() {
int a,rem=0,result=1;
cout<<"enter the number :";
cin>>a;
if(a<100000000000)
{
while(a!=0)
{rem=a%10;
result=result*rem;
	a=a/10;
}
cout<<result;
}
else
{
	cout<<"invalid input";
}

}
