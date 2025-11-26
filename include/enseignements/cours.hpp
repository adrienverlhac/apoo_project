#pragma once
#ifndef __COURS_HPP__
#define __COURS_HPP__

#include <enseignement.hpp>

class Cours : public Enseignement
{
private:
    static constexpr float coef = 1.5f; 
public:
    Cours() = default;
    ~Cours();
    float getCoef() const override;
};



#endif