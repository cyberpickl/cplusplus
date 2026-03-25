#include <iostream>

double square(double length); // declaring the function but not specifying it so when executed it goes to the function block then the main func

int main (){
    double length; 
    double result;
    double area;
    
    std::cout<<"Enter the length of the square: "<<std::endl;
    std::cin>>length;

    area = square(length);
    std::cout<<area;


    return 0;
}

double square(double length){
    double result = length * length ;
    return result;

}