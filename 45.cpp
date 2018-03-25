#include <iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the number: ";
    cin>>str;
   if(str.length()<=100000000000){
    cout<<"Number of digits :"<<str.length();
    }
    
    else
    {
        cout<<"Invalid input";
    }
    return 0;
}
