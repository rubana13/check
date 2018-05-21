#include <iostream>
#include <string.h>
using namespace std;
int main() {
string str[100];
cin>>str[100];
for(int i=0;str[i]!='\0';i++)
{
if((i==0)&&(i==' '))
{
	cout<<str[i].toupper();
}
}

}
