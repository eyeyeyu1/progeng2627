#include <iostream>

int main(){
    int year;
    std::cout<<"Enter a year" << std::endl;
    std::cin>>year;
    if(year%4 != 0){
        std::cout<<"It's not leap year"<< std::endl;
    }else{
        if(year%100 != 0){
            std::cout<<"It's leap year"<< std::endl;
        }else{
            if(year%400 == 0){
                std::cout << "It is an leap year" <<std::endl;
            }
        }
    }
}