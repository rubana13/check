#include <iostream>
#include <string>
using namespace std::string;

int main() {
char str[30],rev[30];
rev=reverse(str.begin(),str.end());
if(str==rev)
{
    cout<<"it is a palindrome";
    
}
else
{
    cout<<"it is not a palindrome";
}
}
 
