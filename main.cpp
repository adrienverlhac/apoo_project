#include <iostream>

#include <departement.hpp>

void init() {

    Departement departement("Informatique");
    Enseignant conchon("Conchon", "Emmanuel");
    departement.addEnseignant(conchon);
    departement.addEnseignant("Maria", "Maxime");
    
    const Enseignant *e = departement.getEnseignant(1);
    std::cout << e->toString() << std::endl;

}


int main()
{

    std::cout << "Hello World!" << std::endl;
    init();
    return 0;
}