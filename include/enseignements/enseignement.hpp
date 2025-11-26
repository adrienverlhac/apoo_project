#pragma once
#ifndef __ENSEIGNEMENT_HPP__
#define __ENSEIGNEMENT_HPP__


#include <ue.hpp>

class Enseignement
{
private:
    int id;
    int nb_groupe;
    int nb_heure;
    UE *ue;
public:
    Enseignement() = default;
    ~Enseignement();
};




#endif