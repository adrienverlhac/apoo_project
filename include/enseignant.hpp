#pragma once
#ifndef __ENSEIGNANT_HPP__
#define __ENSEIGNANT_HPP__

#include <string>

class Departement; // class forwarding (regarder l'include dans le cpp pour comprendre)

class Enseignant
{
private:
    int id;
    std::string nom;
    std::string prenom;
    const Departement * departement = nullptr;


public:
    Enseignant(/* args */) = default;
    Enseignant(const std::string& p_nom, const std::string& p_prenom);
    ~Enseignant() = default;
    friend std::ostream& operator<<(std::ostream& os, const Enseignant& e); 
    
    inline int getId() const { return id; }
    inline const Departement * getDepartement() const { return departement; } 
    const std::string& getNom() const;
    
    void setDepartement(const Departement *p_departement);

    std::string toString() const;
};




#endif