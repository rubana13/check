#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    if(cin)
    {
    if(num % 2 == 0){
        cout<<num;
    }else{
        cout<<num-1;
    }
    }
    else
    {
        cout<<"Invalid input";
    }
    return 0;
}
