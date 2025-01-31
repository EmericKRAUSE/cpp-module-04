#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	std::cout << "🔹 [Test 1] Création d'animaux dynamiquement :" << std::endl;
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << "\n🔹 [Test 2] Vérification des types :" << std::endl;
	std::cout << "Type de j (Dog) : " << j->getType() << std::endl;
	std::cout << "Type de i (Cat) : " << i->getType() << std::endl;

	std::cout << "\n🔹 [Test 3] Vérification des sons :" << std::endl;
	i->makeSound();	   // Devrait afficher "Miaou!"
	j->makeSound();	   // Devrait afficher "Woof Woof!"
	meta->makeSound(); // Devrait afficher "I am an animal with no type..."

	std::cout << "\n🔹 [Test 4] Test de la copie d'un Dog :" << std::endl;
	Dog originalDog;
	Dog copiedDog(originalDog);
	std::cout << "Original: " << originalDog.getType() << std::endl;
	std::cout << "Copie: " << copiedDog.getType() << std::endl;

	std::cout << "\n🔹 [Test 5] Test de l'affectation d'un Cat :" << std::endl;
	Cat anotherCat;
	Cat assignedCat;
	assignedCat = anotherCat;
	std::cout << "Affecté: " << assignedCat.getType() << std::endl;

	std::cout << "\n🔹 [Test 6] Suppression des objets :" << std::endl;
	delete meta;
	delete j;
	delete i;

	return 0;
}
