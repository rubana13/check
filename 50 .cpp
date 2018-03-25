#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i,result, count = 0;
    cout<<"Enter a number :";
    cin>>i;
    for(int j = 0;j <= i;j++){
        result = pow(2,j);
        if(result == i){
        count= 1;
        }else{
            count = 0;
        }
    }
    if(count == 1){
        cout<<"Its a power of 2";
    }else{
        cout<<"Its not a power of 2";
    }
    return 0;
}
