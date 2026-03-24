#include <iostream>
/*wanting to declare multiple variables with different values but same name */
namespace first{

        int x =1;
}

namespace second{

        int x =34;
}

int main(){

    int x =0;
    std::cout<<second::x;
    return 0;
}