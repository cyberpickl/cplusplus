#include <iostream>

int main()
{
    double temp; 
    int  choice;
    double celsius;
    double fahren;

    std::cout<<"Enter the temperature: ";
    std::cin>> temp;

    std::cout<<"Pick a unit to convert it to ( 1: Celsius to Fahrenheit/ 2: Fahrenheit to Celsius): ";
    std::cin>>choice;

    switch(choice){
        case 1:
        fahren = temp * (9.0/5.0) + 32;
        std::cout<<"The temperature is"<<fahren<<" °F"<<std::endl;
        break;


        case 2:
        celsius= (temp -32) * (5.0/9.0);
        std::cout<<"The temperature is "<<celsius<<" °C"<<std::endl;
        break;


        default:
        std::cout<<"Enter a valid option";}
    return 0;


}