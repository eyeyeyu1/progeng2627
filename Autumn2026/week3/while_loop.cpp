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
// have to write (-10< x) && (x>10)


#include<string>
// int main(){
//     std::string in;
//     std::cin>>in;
//     while((in != "stop") && (in != "Stop")){
//         std::cout << in << std::endl;
//         std::cin >> in;
//     }
// }

int main(){
    int n, sum, i;
    i=1;
    double ave = 0;
    std::cin>>n;
    sum=0;
    while (n!=0){
        sum = sum  + n;
        ave = double(sum)/i;
        i++;
        std::cout << "There current averagte is "<<ave<< "\n"<< std::endl;
        std::cin>>n;
    }
}