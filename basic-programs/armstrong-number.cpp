#include<iostream>
bool prime(int x);
int main(){
  
  int num;
  bool res;
  
  std::cout<<"*** An Armstrong number is a number which is the sum of the cube of each of its digits ***";
  std::cout<<"\nEnter a number to check if it is an Armstrong number ";
  std::cin>>num;
  res=prime(num);
    
    if(res==1){
      
           std::cout<<"\nThis is an Armstrong number.";
      
      }
    else{
          std::cout<<"\nThis is NOT an Armstrong number.";
      
      }
 return 0;

}

bool prime(int x){
        int c=0;
        int r, x2;
        x2=x;
        while(x2!=0){
                 r=x2%10;
                 c= c+(r*r*r);
                 x2=x2/10;
          
          }
          
          if(c==x){
              return 1;
            }
            else{
              return 0;
              }
             
  }

