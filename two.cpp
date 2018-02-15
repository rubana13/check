#include <iostream>
using namespace std;

int main() {
int a,n,sum=0,i,count;
cout<<"enter the number :";
cin>>a,n;
for(i=1;i<=a;++i)
{
count++;
cout<<count;
 for(i=1;i<=n;i++)
 {
 	sum=sum+i;
 }
 cout<<sum;
}
if(!cin)
{
	cout<<"invalid input";
}

}
