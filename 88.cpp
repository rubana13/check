#include <iostream>
using namespace std;

int main()
{
    int i,a,b,lcm,n; 
    cin>>a>>b;
    if(a>b)
    n=a;
    else
    n=b;
    for(i=n;i<=a*b;i++)
    {
    	if((i%a==0)&&(i%b==0))
    	{
 
cout<<i;
break;
}
}
if(!cin)
{
    cout<<"Invalid input";
}
    
    return 0;
}
