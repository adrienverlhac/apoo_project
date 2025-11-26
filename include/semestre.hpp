#pragma once
#ifndef __SEMESTRE_HPP__
#define __SEMESTRE_HPP__

#include <string>
#include <vector>
#include <diplome.hpp>
#include <ue.hpp>

class Semestre
{
private:
    int id;
    std::string nom;
    std::string type;
    Diplome diplome;
    std::vector<UE> modules;
public:
    Semestre(/* args */) = default;
    Semestre(const std::string& p_nom, const Diplome& p_diplome);
    ~Semestre() = default;

    void addUE(UE& ue);
    UE * getUE(int id);
};



#endif