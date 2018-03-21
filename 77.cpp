#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    cout<<"Factors of "<<a<<" :";
    for(int i = 1;i <=a; i++){
        if(a % i == 0){
            
        
            cout<<i<<" ";
        }
    }
    return 0;
}
