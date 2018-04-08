#include <iostream>
using namespace std;

int main()
{
    int i,j,count=0; 
    char arr[100];
   for(i = 0;arr[i]!='\0';i++)
    {
 for(j =i+1;arr[j]!='\0'; j++)
        {
      if(arr[i]==arr[j])
      {
          count=1; 
      } 
     }
    }
    if(count==1){
        cout << "It is not an isogram";
    }
    else
    {
        cout << "It is an isogram";
    }
    
    return 0;
}
