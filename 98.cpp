#include <iostream>

using namespace std;

int main() {
int n,i;
    cin>>n;
    int b[n];
    for(i=1;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=1;i<n;i++)
    {
        if(b[i]!=i)
        {
            cout<<i<<" ";
        }
    }
}
