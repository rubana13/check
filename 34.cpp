#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    int count = 0,i;
    cout << "Enter a sentence: "<<endl;
    getline(cin, str);
    for(i = 0;i <= str.length();i++)
    {
        if(str[i] == '.')
        {
            count++;
        }
    }
    cout<<"No of lines:"<<count;
    return 0;
}
