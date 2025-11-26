#pragma once
#ifndef __TP_HPP__
#define __TP_HPP__

#include <enseignement.hpp>

class Tp : public Enseignement
{
private:
    static const float coef;
public:
    Tp(/* args */) = default;
    ~Tp();
};




#endif