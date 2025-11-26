#include <iostream>

#include <departement.hpp>

void test() {

    Departement departement("Informatique");
    Enseignant conchon("Conchon", "Emmanuel");
    departement.addEnseignant(conchon);
    departement.addEnseignant("Maria", "Maxime");
    
    const Enseignant *e = departement.getEnseignant(1);
    std::cout << *e << std::endl;

}


int main()
{

    test();
    return 0;
}