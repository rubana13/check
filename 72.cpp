#include <iostream>
using namespace std;
int main()
{
    string a;
    int set = 0;
    cin>>a;
    for(int i = 0; i < a.length(); i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            set = 1;
            break;
        }
    }
    if(set == 1){
        cout<<"yes";
    } else {
        cout<<"No";
    }
    return 0;
}
