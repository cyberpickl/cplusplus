#include <iostream>
//function - block of reusable code
void happyBirthday(std::string name){ //pass the data type and variable name for the arguments
    //function declared above main function as programs are read and executed in order of the program
    std::cout<<"Happy Birthday to you"<<'\n';
    std::cout<<"Happy Birthday to you"<<'\n';
    std::cout<<"Happy Birthday to you dear "<<name<<std::endl;
    std::cout<<"Happy Birthday to you"<<'\n';
    
}

int main(){
    std::string name; //declare - each function is its own unit you need to reclare to share variables and other info


    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);

    happyBirthday(name); //call the function






    return 0;
}