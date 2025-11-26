#include <semestre.hpp>

Semestre::Semestre(const std::string& p_nom, const Diplome& p_diplome){

    static int count_id = 0;
    id = count_id++;
    nom = p_nom;
    diplome = p_diplome;
}

void Semestre::addUE(UE& ue) {
    modules.push_back(ue);
}
UE * Semestre::getUE(int id) {
    for (UE& ue : modules) {
        if(ue.getId() == id)
            return &ue;
    }
    return nullptr;
}
