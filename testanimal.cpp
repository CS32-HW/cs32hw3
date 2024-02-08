#include <iostream>
#include <string>
using namespace std;

#include "animal.cpp"

void animate(const Animal* a)
{
    a->speak();
    cout << "!  My name is " << a->name()
         << ".  Watch me " << a->moveAction() << "!\n";
}

int main()
{
    Animal* animals[4];
    animals[0] = new Cat("Puss in Boots");
      // Pigs have a name and a weight in pounds.  Pigs under 180
      // pounds oink; pigs weighing at least 180 pounds grunt.
    animals[1] = new Pig("Napoleon", 190);
    animals[2] = new Pig("Wilbur", 50);
    animals[3] = new Duck("Daffy");

    cout << "Here are the animals." << endl;
    for (int k = 0; k < 4; k++)
        animate(animals[k]);

      // Clean up the animals before exiting
    cout << "Cleaning up." << endl;
    for (int k = 0; k < 4; k++)
        delete animals[k];
}
