#include <iostream>
#include <string> // Obligatoire pour pouvoir utiliser les objets string


int main() {
    class Drink {
        // méthodes
    public:
        Drink();

        Drink::Drink()
        {
            name = "Café";
            type = "Café";
            liquide = "Eau";
            delais = 3;
            prix = 0.80;
        };

        void Drink::afficherInfo() const
        {
            std::cout << "Nom : " << name << std::endl;
            std::cout << "Type : " << type << std::endl;;
            std::cout << "Liquide : " << liquide << std::endl;;
            std::cout << "Delais : " << delais << std::endl;;
            std::cout << "Prix : " << prix << std::endl;;


        }

    public:
        std::string name;
        std::string type;
        std::string liquide;
        float delais;
        float prix;
    };

    Drink cafe_court, cafe_long, cafe_lait, chocolat;
    //Création de 2 objets de type Boisson

    cafe_court.name = "Café Court";
    cafe_court.delais = 1;

    cafe_long.name = "Café Long";
    cafe_long.prix = 1;

    cafe_lait.name = "Café au Lait";
    cafe_lait.liquide = "Lait";
    cafe_lait.delais = 1.5;

    chocolat.name = "Chocolat chaud";
    chocolat.type = "Chocolat";
    chocolat.liquide = "Lait";
    chocolat.prix = 2;

cafe_court.afficherInfo();
cafe_long.afficherInfo();
cafe_lait.afficherInfo();
chocolat.afficherInfo();


return 0;

};