#include <iostream>
using namespace std;
int main()
{
    string s1,s2,str3;
    cout<<"Enter the two strings"<<endl;
    cin>>s1>>s2;
    if((s1.length()<=1000)&&(s2.length()<=1000))
    str3 = s1+s2;
    cout<<str3;
    return 0;
}
