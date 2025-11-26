#pragma once
#ifndef __INTERVENTION_HPP__
#define __INTERVENTION_HPP__

#include <enseignant.hpp>
#include <ue.hpp>

class Intervention
{
private:
    Enseignant * intervenant;
    UE * ue;
public:
    Intervention(/* args */) = default;
    ~Intervention();
};




#endif