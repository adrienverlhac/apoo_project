#include <enseignement.hpp>

#include <ue.hpp>


float Enseignement::getNbHeure() { 
    return nb_heure;
}

int Enseignement::getNbGroupe() { 
    return nb_groupe;
}

void Enseignement::setUE(const UE *p_ue) {
    ue = p_ue;
}
