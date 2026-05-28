#include <iostream>
#include <vector>

int main() {
    
    //declaration and initialization of a vector
    std::vector<int> vec;
    vec={1,2,3,4,5};
    
    //displaying the elements in the vector using a for each loop
    std::cout<<"\nPrinting the Vector after it was initialised: ";
    for(int i : vec){
        std::cout <<i<<" ";
    }
    std::cout<<"\n";
    std::cout<<"\nNow we will enter the values one by one after having the previous elements deleted.";
    vec.clear();        //this clears the previous vector so that we manually put new datas into it
    std::cout<<"\n";
    int ch,data;
    do{
        std::cout<<"\nEnter a data you want to enter:";
        std::cin>>data;
        vec.push_back(data);
        std::cout<<"\nDo you want to continue?...Press 0 to terminate";
        std::cin>>ch;
    }while(ch!=0);
    
    std::cout<<"\nPrinting the vector after the new elements are input: ";
    for(int i : vec){
        std::cout <<i<<" ";
    }
    std::cout<<"\n";
    //Now we will calculate the sum of all the elements in the vector
    int sum=0;
    for(auto it=vec.begin(); it!=vec.end(); it++){
        sum=sum+(*it);
    }
    
    std::cout<<"\nThe sum of all the elements currently present in the vector is="<<sum;
    
    //Printing the maximum element in the vector
    int max= vec[0];
    
    for(auto it=vec.begin(); it!=vec.end(); it++){
        
        if(max<*(it)){
            max=*it;
        }
        
    }
    
    std::cout<<"\nThe Maximum value is="<<max;
    
    //number of even elements in the vector
    int count=0;
    
    for(auto it=vec.begin(); it!=vec.end(); it++){
        
        if(*(it)%2==0){
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
    
    std::cout<<"\nThe reversed Array: ";
    
    for(int i : vec)
    {
        std::cout<<i<<" ";
    }
    
    //Removing duplicates from a sorted vector.
    std::cout<<"\n\nNow we will enter the values one by one but this time it would be in a sorted way with duplicates.\n";
    vec.clear();        
    
    
    do{
        std::cout<<"\nEnter a data you want to enter:";
        std::cin>>data;
        vec.push_back(data);
        std::cout<<"\nDo you want to continue?...Press 0 to terminate";
        std::cin>>ch;
    }while(ch!=0);
    
    std::cout<<"\n\nThis is the vector with duplicates: ";
    for(int i : vec){
        std::cout <<i<<" ";
    }

    for(auto it = vec.begin(); it != vec.end(); it++)
{
    auto j = std::next(it);

    while(j != vec.end())
    {
        if(*it == *j)
            j = vec.erase(j);
        else
            j++;
    }
}

    std::cout<<"\nAfter removing the duplicates: ";
    for(int i : vec){
         std::cout<<i<<" ";
      }
    
    
    return 0;
}
