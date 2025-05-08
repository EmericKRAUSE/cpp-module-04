#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	std::cout << "--- Test de creation et destruction de Dog et Cat ---" << std::endl;
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	delete dog;
	delete cat;

	std::cout << "\n--- Test avec un tableau d'Animal ---" << std::endl;
	const int size = 6;
	const Animal *animals[size];

	for (int i = 0; i < size; ++i)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < size; ++i)
		delete animals[i];

	std::cout << "\n--- Test de copie profonde ---" << std::endl;
	Dog dog1;
	dog1.setIdea("Chase the ball", 0);
	dog1.setIdea("Bark at the mailman", 1);

	Dog dog2 = dog1;

	std::cout << "Dog1's ideas: " << dog1.getIdea(0) << std::endl;
	std::cout << "Dog2's ideas (copied from Dog1): " << dog2.getIdea(0) << std::endl;

	dog2.setIdea("Sleep in the sun", 0);

	std::cout << "After modifying Dog2's ideas: " << std::endl;
	std::cout << "Dog1's ideas: " << dog1.getIdea(0) << std::endl;
	std::cout << "Dog2's ideas: " << dog2.getIdea(0) << std::endl;

	std::cout << "\n--- Test de fuite de memoire ---" << std::endl;
	{
		Dog *tempDog = new Dog();
		tempDog->setIdea("Temporary dog idea", 0);
		std::cout << tempDog->getIdea(0) << std::endl;
		delete tempDog;
	}

	std::cout << "\n--- Tests termines ---" << std::endl;
	return 0;
}
