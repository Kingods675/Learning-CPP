#include <iostream>
#include "CharacterChecker.h"

int main() {
      
    // /***********************************************************************
    //  * This code is provided as a starting point for development and testing
    //  * Please modify the code below as you develop your program. 
    //  * **********************************************************************/
    
    std::cout << CheckCharacter("happy birthday", 2) << std::endl;
    std::cout << CheckCharacter("happy birthday", 5) << std::endl;
    std::cout << CheckCharacter("happy birthday 2 you", 15) << std::endl;
    std::cout << CheckCharacter("happy birthday!", 14) << std::endl;

    return EXIT_SUCCESS;
}
