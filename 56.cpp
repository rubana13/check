#include <iostream>

using namespace std;

int main()
{
    string str;
    int al = 0,no = 0;
    cout<<"Enter the string :";
    cin>>str;
    for(int i = 0;i  < str.length()-1; i++){
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            al = 1;
        }
        if(str[i] >= '0' && str[i] <= '9'){
            no = 1;
        }
    }
    if(al == 1 && no == 1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
   
