    #include <iostream>
    using namespace std;
     
    int main() {
    	int num,r,sum,temp,n,m;
    	cin>>m>>n;
   
        for(num=m;num<=n;num++){
             temp=num;
             sum = 0;
     
             while(temp!=0){
                 r=temp%10;
                 temp=temp/10;
                 sum=sum+(r*r*r);
             }
             if(sum==num)
             {
                 printf("%d ",num);
             }
              }
     }
  
    	return 0;
    }
