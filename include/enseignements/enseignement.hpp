#pragma once
#ifndef __ENSEIGNEMENT_HPP__
#define __ENSEIGNEMENT_HPP__

#include <ostream>


class UE; // class forward

class Enseignement
{
private:
    static const float coef;
    int id;
    int nb_groupe;
    float nb_heure;
    const UE *ue;
public:
    Enseignement() = default;
    Enseignement(int p_nb_groupe, float p_nb_heure);

    virtual ~Enseignement() = default;
    virtual float getCoef() const = 0;
    virtual float getNbHeure() const;
    virtual int getNbGroupe() const;
    virtual int getId() const;
    virtual void setUE(const UE *p_ue);

    std::string toString() const;
    friend std::ostream& operator<<(std::ostream& os, const Enseignement& e); 

};


#endif