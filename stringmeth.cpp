// string meth hehehe walter white let;s cook meth heheheh 

#include <iostream>

int main(){

    std::string name;

    std::cout<<"Enter your name: "<<std::endl;
    std::getline(std::cin, name);

    int len = name.length();
    if (name.length() > 20){

        std::cout <<"Your name is too long";
    }
    else {

        std::cout<<"Welcome "<<name;
    }

    if(name.empty()){

        std::cout<<"Your name cannot be empty";
    }
    else {
      std::cout<<"Welcome "<<name;
    
    }
    
    std::cout<<name.at(1);
    name.insert(0, "@" );

    std::cout<< name.find(' '); //will give you the index of the first space

    name.erase(0, 3); //removes or erases everything within the range
    std::cout<< name;

    return 0;
}