#include <iostream>
using namespace std;

int main()
{
    string s;
    int count = 0,i;
    cout << "Enter a sentence: "<<endl;
    getline(cin, s);
    for(i = 0;i <= s.length()-1;i++){
        if(s[i] >= '0' && s[i] <= '9'){
            continue;
        }else if(s[i] >= 'a' && s[i] <= 'z' ||s[i] >= 'A' && s[i] <= 'B'){
            continue;
        }else if(s[i] ==' ' || s[i] == '.'){
            continue;
        }else{
            count++;
        }
    }
    cout<<"No of special characters:"<<count;
    return 0;
}
