#pragma once
#ifndef __TD_HPP__
#define __TD_HPP__

#include <enseignement.hpp>

class Td : public Enseignement
{
private:
    static const float coef;
public:
    Td(/* args */)= default;
    ~Td();
};


#endif