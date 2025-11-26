#pragma once
#ifndef __UE_HPP__
#define __UE_HPP__

#include <enseignant.hpp>
#include <departement.hpp>
#include <enseignement.hpp>
#include <string>


class UE
{
private:
    int id;
    std::string nom;
    const Departement *gerant;
    const Enseignant *resposable;
    std::vector<Enseignement *> enseignements;

public:
    UE() = default;
    UE(const std::string& p_nom, const Departement * p_gerant, const Enseignant *p_responsable );
    ~UE() = default;

    void addEnseignement(Enseignement * p_enseignement);
    float getETD();
    inline int getId() const { return id; }


};




#endif