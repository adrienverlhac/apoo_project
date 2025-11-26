#include <enseignant.hpp>
#include <departement.hpp>
#include <ostream>

Enseignant::Enseignant(const std::string& p_nom, const std::string& p_prenom) : nom(p_nom), prenom(p_prenom)
{
    static int count_id = 0;
    id = count_id++;
}


void Enseignant::setDepartement(const Departement *p_departement)
{
    departement = p_departement;
}

std::string Enseignant::toString() const {
    return "Enseignant : " + std::to_string(id) +
           "\nPrenom -> " + prenom +
           "\nNom -> " + nom +
           "\nDepartement -> " + departement->getNom();
}

std::ostream& operator<<(std::ostream &strm, const Enseignant& e) 
{
    return strm << e.toString();
}