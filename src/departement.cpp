#include <departement.hpp>

#include <iostream>

Departement::Departement(const std::string& p_nom): nom(p_nom)
{
    static int count_id;
    id = count_id++;
}

void Departement::addEnseignant(Enseignant& p_enseignant) 
{
    if (p_enseignant.getDepartement() != nullptr) {
        std::cerr << "ERREUR :: L'enseignant à dejà un département " << std::endl;
        return ;
    }
    p_enseignant.setDepartement(this);
    enseignants.push_back(p_enseignant);
}

void Departement::addEnseignant(const std::string& p_nom, const std::string p_prenom) {
    enseignants.push_back({p_nom, p_prenom});
    enseignants.back().setDepartement(this);
}

Enseignant * Departement::getEnseignant(int id)
{
    for (Enseignant& e: enseignants) {
        if (e.getId() == id)
            return &e;
    }
    return nullptr;
}

