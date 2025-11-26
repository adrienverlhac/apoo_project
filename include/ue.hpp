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
    const Departement *gerant;
    const Enseignant *resposable;

public:
    UE() = default;
    UE(const std::string& p_nom, const Departement * p_gerant, const Enseignant *p_responsable );
    ~UE() = default;
};




#endif