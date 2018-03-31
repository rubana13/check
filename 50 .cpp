#include <iostream>
using namespace std;

int main()
{
    int num,tempNum,count;
    cout<<"Enter a number :";
    cin>>num;
       tempNum=num;
   count=0;
   while(tempNum!=1)
    {
        if(tempNum%2!=0){
           count=1;
            break;
        }
        tempNum=tempNum/2;
    }
  
    if(count=0)
        cout<<"It is a power of 2.";
    else
       cout<<"It is not the power of 2.";
      
}
