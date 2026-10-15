#include<iostream>

// int main(){
//     double x;
//     int n, out;
//     out=1;
//     std::cin>>x>>n;

//     for(int i=0; i<n; i++){
//        out = out*x;
//     }
//     std::cout<<out<<std::endl;

// }

int main(){
    int x, out;
    out=1;
    std::cin>>x;
    int n=x;
    for(int i=0; i<x; i++){
        out=out*n;
        n--;
    }
    std::cout << out<< std::endl;

}
