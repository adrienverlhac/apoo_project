#pragma once
#ifndef __TP_HPP__
#define __TP_HPP__

#include <enseignement.hpp>

class Tp : public Enseignement
{
private:
    static constexpr float coef = 2.f/3.f;
public:
    Tp(/* args */) = default;
    ~Tp();
    float getCoef() const override;
};




#endif