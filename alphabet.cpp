#include <iostream>
using namespace std;

int main() {
char al;
cout<<"Enter the input :";
cin>>al;
if((al>='a'&&al<='z')||(al<='A'&&al>='Z'))
{
cout<<"It is a alphabet";
}
else
{
cout<<"It is not a alphabet ";
}
	return 0;
}
