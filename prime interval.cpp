#include <iostream>
using namespace std;

int main() {
	int num,n,m,i,count;
	cout<<"Enter the starting no:";
	cin>>m;
	cout<<"Enter the ending no:";
	cin>>n;
	for(num=m;num<=n;num++)
	{count=0;		
	for(i=2;i<=num/2;i++)
{
	if(num%i==0)
	{
		count++;
		break;
}
	
}

		if(count==0 && num!= 1)
            cout<<num;
	}
}
