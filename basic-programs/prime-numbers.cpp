#include<iostream>
bool prime(int x);
int main(){
  
  int a,b;
  bool res;
  int i;
  
  std::cout<<"\nEnter two numbers you want find prime numbers between:";
  std::cout<<"\nNumber1:";
  std::cin>>a;
  std::cout<<"\nNumber2:";
  std::cin>>b;
  
  for(i=a; i<=b; i++){
    
    res=prime(i);
    if(res==0 && i!=1 && i!=0){
      
           std::cout<<"\n"<<i;
      
      }
    
   }
    
  return 0;

}

bool prime(int x){
        int count=0;
        bool r;
        for(int j=1; j<=x;j++){
             
             if(x%j==0)
                {    count++;
                 }
          
          }
          
          if(count>2){
              r=1;
            }
            else{
              r=0;
              }
              
             return r;
  }

