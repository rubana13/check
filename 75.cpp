#include <iostream>
using namespace std;
int main()
{
    string s;
    int i;
    cin>>s;
    i = s.length()/2;
    if(s.length() % 2 == 0){
        s[i-1] = '*';
        s[i] = '*';
    } else {
        s[i] = '*';
    }
    cout<<s;
    return 0;
}
