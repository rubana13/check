#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>= 1 && n <=10){
        cout<<"yes";
    }else if((n<=11)||(n>=11))
    {
        cout<<"no";
    }
    if(!cin)
    {
        cout<<"Invalid input";
    }
    return 0;
}
