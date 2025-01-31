#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	// Animal* animals[10];
	// for (int i = 0; i < 10; i++)
	// {
	// 	std::cout << i << std::endl;
	// 	if (i < 5)
	// 		animals[i] = new Cat;
	// 	else
	// 		animals[i] = new Dog;
	// }
	// for (int i = 0; i < 10; i++)
	// 	delete animals[i];
	Animal *dog = new Dog;

	delete dog;
}
