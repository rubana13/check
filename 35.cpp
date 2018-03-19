#include <iostream>
using namespace std;

int main()
{
    string a;
    int count = 0,i;
    cout << "Enter a sentence: "<<endl;
    getline(cin, a);
    for(i = 0;i <= a.length()-1;i++){
        if(a[i] >= '0' && a[i] <= '9'){
            count++;
        }
    }
    cout<<"No of numeric characters:"<<count;
    return 0;
}
