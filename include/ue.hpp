#pragma once
#ifndef __UE_HPP__
#define __UE_HPP__

#include <enseignant.hpp>
#include <departement.hpp>
#include <string>
class UE
{
private:
    int id;
    std::string nom;
    // std::string code;  c'est quoi chef???
    Departement *gerant;
    Enseignant *resposable;

public:
    UE(/* args */);
    ~UE();
};




#endif