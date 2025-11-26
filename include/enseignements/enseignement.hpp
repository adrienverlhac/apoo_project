#pragma once
#ifndef __ENSEIGNEMENT_HPP__
#define __ENSEIGNEMENT_HPP__


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
    virtual float getNbHeure();
    virtual int getNbGroupe();
    
    virtual void setUE(const UE *p_ue);
};


#endif