#include <iostream>


int main(){
    int columns;
    int rows;
    char symbols;

    std::cout<<"How many columns?: ";
    std::cin >> columns;

    std::cout<<"How many rows?: ";
    std::cin >> rows;
    
    std::cout<<"Enter a symbol to use: ";
    std::cin >> symbols;

    for( int i =0; i < rows; i++){
        for( int j=0 ; j < columns; j++){
            std::cout<<symbols;
        }
        std::cout << '\n';

    }






    return 0;









}