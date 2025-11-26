#include <ue.hpp>

UE::UE(const std::string& p_nom, const Departement * p_gerant, const Enseignant *p_responsable )
{
    static int count_id = 0;
    id = count_id++;
    nom = p_nom;
    gerant = p_gerant;
    resposable = p_responsable;   
}

float UE::getETD() 
{
    float result = 0;
    for (Enseignement *e : enseignements) {
        result += e->getCoef() * e->getNbHeure() * e->getNbGroupe();
    }
    return result;
}

void UE::addEnseignement(Enseignement * p_enseignement)
{
    enseignements.push_back(p_enseignement);
}
