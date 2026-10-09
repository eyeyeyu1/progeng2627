#include <iostream>
#include <string>

int main(){
    std::cout << "hello everyone" << std::endl;
    std::cout<< "hello" << "\n" <<"\n" <<std::endl;
    std :: cout << "goodbye" << std::endl;

    std::string user_name;
    std::string user_surname;

    std::cout<<"What is your username?" << std::endl;
    std::cin >> user_name;

    std::cout<<"What is your surname?" << std::endl;
    std::cin >> user_surname;

    std::cout << "Hello " << user_name << " "<< user_surname << std::endl;
}