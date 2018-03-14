#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,j,k,l,a,b;
    cout<<"Enter the first hour and minute:"<<endl;
    cin>>i>>j;
    cout<<"Enter the second hour and minute:"<<endl;
    cin>>k>>l;
    a= k - i;
    b = l - j;
    cout<<"The difference is:";
    cout<<abs(a)<<" "<<abs(b);
    if(!cin)
    {
        cout<<"Invalid input";
    }
    return 0;
}
