#pragma once
#ifndef __ENSEIGNANT_HPP__
#define __ENSEIGNANT_HPP__

#include <string>

class Enseignant
{
private:
    int id;
    std::string nom;
    std::string prenom;


public:
    Enseignant(/* args */) = default;
    ~Enseignant();
};



#endif