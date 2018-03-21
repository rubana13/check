#include<iostream>
using namespace std;
int main(){
    int i,j,count = 0;
    cin>>i>>j;
    i *= j;
    for(int k = 0;k <= i;k++){
        if(k * k == i){
            count = 1;
        }
    }
    if(count == 1){
        cout<<"Yes";
    } else {
        cout<<"No";
    }
    return 0;
}
