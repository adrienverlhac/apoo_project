#pragma once
#ifndef __DEPARTEMENT_HPP__
#define __DEPARTEMENT_HPP__

#include <string>
#include <enseignant.hpp>
#include <vector>

class Departement
{
private:
    int id;
    std::string nom;
    std::vector<Enseignant> enseignants;
public:
    Departement(/* args */) = default;
    Departement(const std::string& p_nom);
    ~Departement() = default;

    inline int getId() const { return id; }
    inline const std::string& getNom() const { return nom; }
    inline const std::vector<Enseignant>& getEnseignants() const { return enseignants; }

    Enseignant * getEnseignant(int id);
    void addEnseignant(Enseignant& p_enseignant);
    void addEnseignant(const std::string& p_nom, const std::string p_prenom);
};




#endif