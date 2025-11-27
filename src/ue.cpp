#include <ue.hpp>

UE::UE(const std::string& p_nom, const Enseignant *p_responsable )
{
    static int count_id = 0;
    id = count_id++;
    nom = p_nom;
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

const std::string& UE::getNom() const {
    return nom;
}


void UE::addEnseignement(Enseignement * p_enseignement)
{
    enseignements.push_back(p_enseignement);
}

const Departement *UE::getDepartement() const {
    return resposable->getDepartement();
}

std::string UE::toString() const {
    return "UE :" + std::to_string(id) +
            "\nNom -> " + nom +
            "\nResponsable -> " + resposable->getNom() +
            "\n Departement gérant -> " + resposable->getDepartement()->getNom();
}


std::ostream& operator<<(std::ostream& os, const UE& ue) {
    return os << ue.toString();
}
