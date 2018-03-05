#include <iostream>

using namespace std;

int main() {
int n;
cin>>n;
if(n<=1000)
{
    n=n*2;
    cout<<n;
}
else
{
    cout<<"Input out of range";
}
}
