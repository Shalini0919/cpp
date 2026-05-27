#include<iostream>
int main(){
  
  int num;
  int i=1;
  
  std::cout<<"\nEnter the limit of the Fibbonacci series :";
  std::cin>>num;
  
  int a=0;
  int b=1;
  int c;
  std::cout<<"\n"<<a<<"\n"<<b;
  
  while(i<=num-2){    //The num is decremented by 2 because first 2 are already printed 
           c=a+b;
           std::cout<<"\n"<<c;
           a=b;
           b=c;
           i++;
   }
  
  return 0;

}
