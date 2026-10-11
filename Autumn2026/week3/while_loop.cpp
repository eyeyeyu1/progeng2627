#include <iostream>

// int main(){
//     double x, out;
//     int n;
//     std:: cin >> x >> n;
//     out = 1;
//     int i = 0;
//     while(i<=n){
//         out = out*x;
//         i++;
//     }
//     std::cout<< out << std::endl;
// }

// also note that -10<x<10 cant be processed correctly;
// have to write -10< x && x>10


#include<string>
int main(){
    std::string in;
    std::cin>>in;
    while(in != "stop"){
        std::cout << in << std::endl;
        std::cin >> in;
    }
}