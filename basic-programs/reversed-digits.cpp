#include<iostream>
int prime(int x);
int main(){
  
  int num;
  int res;
  
  std::cout<<"\nEnter a number to get the reversed digits of:";
  std::cin>>num;
  res=prime(num);
  std::cout<<"The number after the reversed digits: "<<res;
  return 0;

}

int prime(int x){
 
        int rev=0, x2;
        x2=x;
        while(x2!=0){
                 rev= (10*rev) + x2%10;
                 x2=x2/10;
          
          }
              
              return rev;
             
  }

