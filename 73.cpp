#include <iostream>
using namespace std;
int main()
{
    int a,num1,num2,set = 0;
    cin>>a;
    cout<<"Enter the range :"<<endl;
    cin>>num1>>num2;
    for(int i = num1;i <= num2; i++){
        if(i == a){
            set = 1;
            break;
        }
    }
    if(set == 0){
        cout<<"no";
    } else {
        cout<<"yes";
    }
    
    return 0;
}
