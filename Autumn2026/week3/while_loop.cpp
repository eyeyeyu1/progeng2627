#include <iostream>

int main(){
    double x, out;
    int n;
    std:: cin >> x >> n;
    out = 1;
    int i = 0;
    while(i<=n){
        out = out*x;
        i++;
    }
    std::cout<< out << std::endl;
}