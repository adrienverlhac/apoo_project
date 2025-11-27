#include <enseignement.hpp>

#include <ue.hpp>

float Enseignement::getNbHeure() const{ 
    return nb_heure;
}

int Enseignement::getNbGroupe() const{ 
    return nb_groupe;
}

int Enseignement::getId() const
{
    return id;
}
void Enseignement::setUE(const UE *p_ue) {
    ue = p_ue;
}

std::string Enseignement::toString() const {
    return "Enseignement :" + std::to_string(id) +
    "\nCoef -> " + std::to_string(getCoef()) + 
    "\nNombre d'heure -> " + std::to_string(nb_heure) +
    "\nNombre de groupe -> " + std::to_string(nb_groupe) +
    "\nUE -> " + ue->getNom();
}


std::ostream& operator<<(std::ostream& os, const Enseignement& e) 
{
    return os << e.toString();
}
