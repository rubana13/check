#include <iostream>

using namespace std;

int main() {
	int n,r,i,k=0,a[20];
    cout<<"enter the number:";
    cin>>n;
    while(n>0)
    {
        
        r=n%10;
       
        if((r%2)!=0)
        {
            a[k]=r;
            k++;
        }
        n=n/10;
    }
    
    for(i=k-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    if(!cin)
    {
        cout<<"Invalid input";
    }
}
