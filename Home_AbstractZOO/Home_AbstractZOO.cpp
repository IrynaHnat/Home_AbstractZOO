#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"
#include "Zoo.h"

int main() {
    Zoo zoo;

    zoo.addAnimal(new Cat("Whiskers", 2));
    zoo.addAnimal(new Dog("Buddy", 3));
    zoo.addAnimal(new Parrot("Polly", 1));

    cout << "\nAnimals in the zoo:" << endl;
    zoo.showAnimals();

    zoo.editAnimal(1, "Max", 4); 

    cout << "\nAfter editing the second animal:" << endl;
    zoo.showAnimals();


    zoo.removeAnimal(0); 

    cout << "\nAfter removing the first animal:" << endl;
    zoo.showAnimals();


    zoo.clearZoo();
    cout << "\nZoo cleared." << endl;

    
}
