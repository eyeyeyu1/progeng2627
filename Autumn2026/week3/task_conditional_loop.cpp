#include <iostream>

int main(){
    int n, max;
    max=0;
    
    while(n!=0){
        std::cout<<"Please enter a number:"<<std::endl;
        std::cin>>n;

        if(n>max){
            max=n;
        }
        std::cout<< "maximum so far: "<<max<<std::endl;
    }
}