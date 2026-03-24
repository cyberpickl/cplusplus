#include <iostream>

int main(){
    /*implicit = automatic 
    explicit = precede value with new data type (int) */
    double x = (int) 3.14; // explicit - int assigns only 3 and nothing after the point so double x is just 3
    std::cout<<x<<std::endl;

    char y =100; //implicit  refer to ascii table 100 =d,
    std::cout<<y<<std::endl; 

    int correct_answers = 8;
    int questions = 10;
    double score = correct_answers / (double) questions * 100; // initally typecasted q as int, 9/10= decimal, output becomes 0

    std::cout <<score << '%'<<std::endl;


    return 0;
}