///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Kai Matsusaka <kairem@hawaii.edu>
/// @date   13_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

#include "Animal.h"


const std::string Animal::kingdom = "Animalia";     //Weird way static variables have to be declared

//////Constructors//////
Animal::Animal( const std::string newSpecies ) {
    Animal::species = newSpecies;
    Animal::gender = UNKNOWN_GENDER;
    Animal::weight = -1;
}

Animal::Animal( const std::string newSpecies, const enum Gender newGender ) {
    Animal::species = newSpecies;
    Animal::gender = newGender;
    Animal::weight = -1;
}

Animal::Animal( const std::string newSpecies, const enum Gender newGender, const float newWeight ) {
    Animal::species = newSpecies;
    Animal::gender = newGender;
    Animal::weight = newWeight;
}

Animal::Animal( const std::string newSpecies, const float newWeight ) {
    Animal::species = newSpecies;
    Animal::gender = UNKNOWN_GENDER;
    Animal::weight = newWeight;
}


//////Getters and Setters//////
const std::string Animal::getKingdom() {
    return kingdom;
}

std::string Animal::getSpecies() {
    return species;
}

enum Gender Animal::getGender() {
    return gender;
}

void Animal::setGender( enum Gender newGender ) {

    if( gender == UNKNOWN_GENDER ) {
        gender = newGender;
    }

    else {
        throw std::logic_error( "Gender already set and cannot be changed." );
    }

}

float Animal::getWeight() {
    return weight;
}

void Animal::setWeight( const float newWeight ) {
    if ( newWeight > 0 ) {
        weight = newWeight;
    }

    else {
        throw std::invalid_argument("Weight must be greater than zero.");
    }
}

void Animal::printInfo() {
    std::cout << "Kingdom = [" << kingdom << "]" << std::endl;
    std::cout << "Species = [" << species << "]" << std::endl;
    std::cout << "Gender  = [" << gender  << "]" << std::endl;
    std::cout << "Weight  = [" << weight  << "]" << std::endl;
}


//////Validation//////
bool Animal::isValid() {
    if( Animal::weightIsValid( Animal::weight) &&
        Animal::genderIsValid( Animal::gender ) &&
        Animal::speciesIsValid( Animal::species ) ) { return true; }

    return false;
}

bool Animal::weightIsValid(const float newWeight) {
    if( Animal::weight == -1 || Animal::weight > 0 ) { return true; }

    return false;
}

bool Animal::genderIsValid(const enum Gender newGender) {
    if( Animal::gender == 0 || Animal::gender == 1 || Animal::gender == 2 ) { return true; }

    return false;
}

bool Animal::speciesIsValid(const std::string newSpecies) {
    if( Animal::species.empty() ) { return false; }

    return true;
}


