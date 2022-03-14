///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Kai Matsusaka <kairem@hawaii.edu>
/// @date   13_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

#include "Animal.h"

int main() {

    Animal myAnimal = Animal( "Tiger" );
    myAnimal.printInfo();
    myAnimal.setGender(MALE);
    myAnimal.printInfo();
    std::cout << "Weight is " << myAnimal.getWeight() << std::endl;
    std::cout << "Kingdom is " << myAnimal.getKingdom() << std::endl;

    myAnimal.setWeight(100.5);
    std::cout << "New weight is " << myAnimal.getWeight() << std::endl;

    #ifdef DEBUG
    myAnimal.setWeight(-3.2);       //should fail
    myAnimal.setGender(FEMALE);     //should fail
    #endif

    return 0;

}
