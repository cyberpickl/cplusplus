#include <iostream>


int main(){

    //break = break out of a loop
    //continue = skip the current iteration and continue doing the rest

    for (int i = 0; i < 20; i++){
        if(i==13){
            //break; //stops printing past 12
            //continue; // prints till 12, skips 13, prints 14-20
        }
        std::cout<< i << '\n';

    }

    return 0;

}