#include <iostream>


typedef std::string string_t;
typedef int number_t;

typedef char c_t;

int main(){

    string_t name="Shaina" ;
    number_t number = 19;
    c_t grade = 'A';
    std::cout<<"Hello! My name is "<<name<<std::endl;
    std::cout<<grade<<std::endl;
    std::cout<<"Age = "<<number;

    return 0;


}