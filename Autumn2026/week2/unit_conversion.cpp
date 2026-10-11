#include<iostream>
#include<string>

int main(){
    double length_in, length_out;
    std::string unit_in, unit_out;
    std::cin>> length_in >> unit_in;
    if(unit_in == "km"){
        length_out = length_in /1.609;
        unit_out = "miles";
    }else{
        length_out = length_in *1.609;
        unit_out = "km";
    }
    std::cout << length_in <<" "<< unit_in << " is " << length_out <<  " "<<unit_out << std::endl;
}