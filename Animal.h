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

#pragma once

#include <iostream>
#include <string>


enum Gender {UNKNOWN_GENDER, MALE, FEMALE};


class Animal {

protected:

    static const std::string kingdom; //The static variables in a class are shared by the objects. There can not be multiple copies of same static variables for different objects. Also, because of this reason static variables can not be initialized using constructors.
    std::string species;
    enum Gender gender;
    float weight;


public:

    Animal( const std::string newSpecies );

    Animal( const std::string newSpecies, const enum Gender newGender );

    Animal( const std::string newSpecies, const enum Gender newGender, const float newWeight );

    Animal( const std::string newSpecies, const float newWeight );

public:

    static const std::string getKingdom();

    std::string getSpecies();

    enum Gender getGender();

    void setGender( enum Gender newGender );

    float getWeight();

    void setWeight( const float newWeight );

    void printInfo();

    bool isValid();

protected:
    
    bool weightIsValid( const float newWeight );

    bool genderIsValid( const enum Gender newGender );

    bool speciesIsValid( const std::string newSpecies );


};