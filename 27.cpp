#include <iostream>
#include <string>
using namespace std;

int main(){
string x;
int set = 1;
cin>>x;
for(int i = 0;i <= x.length()-1;i++){
    if(x[i] >= '0' && x[i] <= '9'){
        set = 0;
    }else{
        set = 1;
        break;
    }
}
if(set == 0){
    cout<<"The string is numeric"<<endl; 
}else{
    cout<<"The string is non-numeric"<<endl; 
}
return 0;
}
