#include <iostream>
#include <ctime> //helps generate randoms i think

int main()
{
    //pseudo - random = NOT truly random (but close)
    srand(time(NULL)); // use the current time as the seed so the random numbers are different every run
    

    int num = (rand() % 6) + 1; // % 6 gives a remainder thats 0-6, but on a dice we dont have 6 so add 1
    std::cout<<num;

// you can use the random number generator + switch case to generate random events 
    return 0;
}








