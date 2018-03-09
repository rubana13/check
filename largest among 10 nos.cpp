#include <iostream>
using namespace std;

int main()
{
    int i; 
    int arr[10];
   
 for(i = 0; i < 10; ++i)
    {
        
       cout << "Enter Number " << i + 1 << " : "<<endl;

       cin>>arr[i];
    }

for(i = 1;i < 10; ++i)
    {
      if(arr[0]>arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0];


    return 0;
}
