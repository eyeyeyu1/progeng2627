#include <iostream>

#include <cmath>

double abs(double input){
    if(input>0){
        return input;
    }else{
        return -1*input;
    }
}
    int main(){
        double input;
        std::cout<<"enter a number "<<std::endl;
        std::cin>>input;
        std::cout<< "absolute value of "<<input<<" is "<< abs(input)<<std::endl;
    }



// // header for math operations

// int main(){
//     double n;
//     // the name of the variable doesn't matter
//     std::cout << "please enter a number" << std::endl;
//     std::cin >> n;
//     std::cout << "|" << n << "| = " << std::abs(n) << std::endl;
// }