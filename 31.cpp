#include <iostream>
using namespace std;

int main()
{
    string s;
    int count = 0,i;
    cout << "Enter a sentance: ";
    getline(cin, s);
    for(i = 0;i <= s.length()-1;i++){
        if(s[i] == ' '){
            continue;
        }else{
            count++;
        }
    }
    cout<<count;
    return 0;
}
