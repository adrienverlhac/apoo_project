#pragma once
#ifndef __TD_HPP__
#define __TD_HPP__

#include <enseignement.hpp>

class Td : public Enseignement
{
private:
    static constexpr float coef = 1.f;
public:
    Td(/* args */)= default;
    ~Td();
    float getCoef() const override;
};


#endif