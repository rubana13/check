#include <iostream>

using namespace std;

int main()
{
    int i,j,arr[i];
    cout<<"Enter the array size";
    cin>>i;
    cout<<"Enter the elements into the array"<<endl;
    for(j = 0;j < i;j++){
        cin>>arr[j];
    }
    cout<<"Elements with their array value:"<<endl;
    for(j = 0;j < i;j++){
        cout<<arr[j]<<" "<<j<<endl;
    }
    return 0;
}
