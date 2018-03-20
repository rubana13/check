#include <iostream>
using namespace std;
int main()
{
    int num,sum = 0,r;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if(!cin)
     {
         cout<<"Invalid input"<<endl;
     }
    while(num != 0){
        r = num%10;
        sum += r;
        num /= 10;
    }
    cout<<"sum:"<<sum;
    return 0;
}
