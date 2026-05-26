#include<iostream>
int binary(int x);
int main(){
  
  int num;
  int res;
  
  std::cout<<"\nEnter the Decimal number to get the Binary equivalent of:";
  std::cin>>num;
  res=binary(num);
  std::cout<<"The number after the reversed digits: "<<res;
  return 0;

}

int binary(int x){
 
        int r;
        int c=0;
        int x2=x;
        while(r!=1){
                 r=x2%2;
                 if(r==0)
                     c++;
                 x2=x2/2;
         }
         
         r=0;
         while(x!=0){
                  r=(r*10)+ x%2;
                  x=x/2;
           
           }
           
           for(int j=1; j<=c;j++){
                r=r*10;
             }
              
              return r;
             
  }

