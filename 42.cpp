#include <iostream>
using namespace std;

int main()
{
  string str1,str2;
  int count=0;
  cout<<"enter the strings :";
  cin>>str1>>str2;
  if((str1.length()<=1000)&&(str2.length()<=1000))
  {
  for(int i=0; i <= str1.length()-1;i++){
      if(str1[i] == str2[i]){
          count = 1;
      }else if(str1[i] > str2[i]){
          cout<<str1;
          count= 0;
          break;
      }else{
        cout<<str2;
        count = 0;
        break;
    }
  }
  if(count == 1){
      cout<<str1;
  }
  }
  else
  {
      cout<<"Invalid input";
  }
}
