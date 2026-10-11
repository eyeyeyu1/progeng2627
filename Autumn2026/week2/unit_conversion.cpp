#include<iostream>
#include<string>

// int main(){
//     double length_in, length_out;
//     std::string unit_in, unit_out;
//     std::cin>> length_in >> unit_in;
//     if(unit_in == "km"){
//         length_out = length_in /1.609;
//         unit_out = "miles";
//     }else{
//         length_out = length_in *1.609;
//         unit_out = "km";
//     }
//     std::cout << length_in <<" "<< unit_in << " is " << length_out <<  " "<<unit_out << std::endl;
// }

int main(){
    double temp_in, temp_out;
    std::string unit_in, unit_out;
    std::cin>>temp_in>>unit_in;
    if(unit_in == "C"){
        temp_out = temp_in*2.12;
        unit_out= "K";
    }else if(unit_in =="K"){
        temp_out = temp_in/2.12;
    }else{
        std::cout<< "We can't process this"<<std::endl;
        return 0;
    }
    std::cout<<temp_out << " "<<unit_out <<std::endl;
}