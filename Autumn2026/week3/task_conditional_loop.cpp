#include <iostream>

// int main(){
//     int n, max;
//     max=0;
    
//     while(n!=0){
//         std::cout<<"Please enter a number:"<<std::endl;
//         std::cin>>n;

//         if(n>max){
//             max=n;
//         }
//         std::cout<< "maximum so far: "<<max<<std::endl;
//     }
// }


// #include<iostream>
// int main(){
//     int n, x, upper, lower;
//     std::cout<< "enter the upper and lower boundaries"<< std::endl;
//     std::cin>>upper>>lower;
//     n= (upper+lower)/2;
//     std::cout<<n<<std::endl;
//     std::cout<<"Is it larger or smaller?"<<std::endl;
    

// }

int main(){
    int n;
    std::cin>>n;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            std::cout<< "it is not a prime"<<std::endl;
            return 0;
        }
    }
    std::cout<< "It is prime"<<std::endl;
}