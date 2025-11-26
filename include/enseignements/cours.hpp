#pragma once
#ifndef __COURS_HPP__
#define __COURS_HPP__

#include <enseignement.hpp>

class Cours : public Enseignement
{
private:
    static const float coef; 
public:
    Cours() = default;
    ~Cours();
};



#endif