#include <iostream>
using namespace std;

int main()
{
    int i, n;
    int arr[100];
    cout<<"Total elements:";
    cin >> n;
    cout << endl;
 for(i = 0; i < n; ++i)
    {
        
       cout << "Enter Number " << i + 1 << " : "<<endl;

       cin>>arr[i];
    }

for(i = 1;i < n; ++i)
    {
      if(arr[0] >arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0];


    return 0;
}
