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
    cin>>arr[i];
    }
     for(i = 1;i < n; ++i)
    {
      if(arr[0] >arr[i])
           arr[0] = arr[i];
    }
cout << "Lowest number = " << arr[0]<<endl;


for(i = 1;i < n; ++i)
    {
      if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Highest number = " << arr[0]<<endl;
    if(!cin)
    {
        cout<<"Invalid input";
    }
   

    return 0;
}
