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

int main(){
    int n;
    std::cin>> n;
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }else{
            n=3*n+1;
        }
        std::cout<<n<<std::endl;
    }
}