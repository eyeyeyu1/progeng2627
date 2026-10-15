#include <iostream>

// int main(){
//     int n;
//     std::cin >>n;
//     int i =0;
//     while(i<n){
//         int j =0;
//         while(j<n){
//             std::cout<<"*";
//             j++;
//         }
//         std::cout<<std::endl;
//         i++;
//     }
// }

int main(){
    int n;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            std::cout<<i*j;
        }
        std::cout<<std::endl;
    }
}