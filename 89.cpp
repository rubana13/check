#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100],t;
    int i,j,l; 
    cin>>str;
   l=strlen(str);
   for(i=0;i<l-1;i++)
   {
       for(j=i+1;j<l;j++)
       {
        if(str[i]>str[j])
        {
            t=str[i];
            str[i]=str[j];
            str[j]=t;
        }
       }
   }
   cout<<str;
   return 0;
}
