#include <iostream>
using namespace std;
int main(){
    int m,n[m],t;
    cout<<"Enter the number of elements to be enter in the array"<<endl;
    cin>>m;
    cout<<"Enter the number of elements into the array"<<endl;
    for(int i=0;i<m;i++){
        cin>>n[i];
    }if(m<=100000)
    {
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(n[i]>n[j]){
                t = n[i];
                n[i] = n[j];
                n[j] = t;
            }
        }
    }
    
    
    cout<<"Median element:";
    if(m % 2 == 0){
        cout<<n[(m/2)-1];
    }else{
        cout<<n[m/2];
    }
    }
    else{
        cout<<"Invalid input";
        
    }
    
}
