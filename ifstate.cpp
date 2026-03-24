#include <iostream>

int main(){

    int age;

    std::cout<<"Enter your age: "<<std::endl;
    std::cin>>age;

    if (age<0){
        std::cout<<"You aren't qualified";
    }
    else if(age >= 18){
        std::cout<<"Welcome to the site";
    }
    else {
        std::cout<<"You are not old enough to enter!";
    }
















    return 0;
}