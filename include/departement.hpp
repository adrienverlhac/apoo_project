#pragma once
#ifndef __DEPARTEMENT_HPP__
#define __DEPARTEMENT_HPP__

#include <string>
#include <enseignant.hpp>
#include <vector>

class Departement
{
private:
    int id_departement;
    std::string nom;
    std::vector<Enseignant> enseignants;
public:
    Departement(/* args */) = default;
    ~Departement();
};




#endif