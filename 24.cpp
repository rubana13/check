#include <iostream>
using namespace std;
int main(){
    int m,n[m],t;
    cout<<"Enter the number of elements to be enter in the array"<<endl;
    cin>>m;
    cout<<"Enter the number of elements in to the array"<<endl;
    for(int i=0;i<m;i++){
        cin>>n[i];
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(n[i]>n[j]){
                t = n[i];
                n[i] = n[j];
                n[j] = t;
            }
        }
    }
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<m;i++){
        cout<<n[i]<<endl;
    }
}
