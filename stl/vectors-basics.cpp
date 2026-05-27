#include<iostream>
#include<vector>

int main() {
    
    //declaration and initialization of a vector
    std::vector<int> vec;
    vec={1,2,3,4,5};
    
    //displaying the elements in the vector using a for each loop
    for(int i:vec){
        std::cout <<i<<" ";
    }
    
    std::cout<<"\nNow we will enter the values one by one";
    vec.clear();        //this clears the previous vector so that we manually put new datas into it
    
    int ch,data;
    do{
        std::cout<<"\nEnter a data you want to enter:";
        std::cin>>data;
        vec.push_back(data);
        std::cout<<"\nDo you want to continue?...Press 0 to terminate";
        std::cin>>ch;
    }while(ch!=0);
    
    for(int i:vec){
        std::cout <<i<<" ";
    }
    
    //Now we will calculate the sum of all the elements in the vector
    int sum=0;
    for(auto i=vec.begin(); i!=vec.end(); i++){
        sum=sum+(*i);
    }
    
    std::cout<<"\nThe sum of all the elements currently present in the vector is="<<sum;
    
    //Printing the maximum element in the vector
    int max= vec[0];
    
    for(auto j=vec.begin(); j!=vec.end(); j++){
        
        if(max<*(j)){
            max=*j;
        }
        
    }
    
    std::cout<<"\nThe Maximum value is="<<max;
    
    //number of even elements in the vector
    int count=0;
    
    for(auto k=vec.begin(); k!=vec.end(); k++){
        
        if(*(k)%2==0){
            count++;
        }
        
    }
    
    std::cout<<"\nThe number of even numbers in the list is="<<count;
    
    //reversing the vector                                          
    int temp, l=0;
    int mid= count/2;
    std::vector<int>::iterator p1;
    std::vector<int>::reverse_iterator p2;
    count=0;
    for(p1=vec.begin(), p2=vec.rbegin(); count<mid; p1++ ,p2++,count++){
        if(*(p1)!=*(p2))
        {    temp = *(p1);
             *(p1) = *(p2);
             *(p2) = temp;
        }
     } 
    
    std::cout<<"\nThe reversed Array=";
    
    for(int h: vec)
    {
        std::cout<<h<<" ";
    }
    
    return 0;

}