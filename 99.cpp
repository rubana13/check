#include <iostream>

using namespace std;

int main() {
	int x,y,z,w,result;
  cin>>x>>y>>z;
w=(x*y);
if(w>=z)
{
  result=w% z;
  cout<<x<<"*"<<y<<"%"<<z<<"= "<<result;
  }
  else
  {
      cout<<"Invalid input or " <<w<< " cannot be divisible by " <<z;
  }
}
