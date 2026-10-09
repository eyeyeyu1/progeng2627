#include<iostream>

// int main(){
//     int n;
//     std::cout<<"Please enter an integer"<< std::endl;
//     std::cin>>n;
//     if(n%2==0){
//         std::cout<<"This is an even number"<<std::endl;
//     }else{
//         std::cout << "This is an odd number"<<std::endl;
//     }
// }

// int main(){
//     int n;
//     std::cout<<"Please enter an integer"<< std::endl;
//     std::cin>>n;
//     if(n%3==0){
//         std::cout<<"This is a multiple of 3"<<std::endl;
//     }else{
//         std::cout<<"This is not a multiple of 3"<<std::endl;
//     }
// }

int main(){
    double n, abs;
    std::cout<<"Enter a value"<<std::endl;
    std::cin>>n;
    if(n>0){
        abs = n;
    }else{
        abs = -n;
    }
    std::cout << "|"<< n << "|"<<" is "<< abs<<std::endl;
}