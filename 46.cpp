#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(!cin)
    {
        cout<<"Invalid input";
    }
    else{
    n += 1;
    cout<<n;
    }
    return 0;
}
