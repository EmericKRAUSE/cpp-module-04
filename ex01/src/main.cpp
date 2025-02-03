#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	Cat cat;
	Dog dog;

	cat.setIdea("test", 0);
	dog.setIdea("test", 0);
	std::cout << cat.getIdea(0) << std::endl;
	std::cout << dog.getIdea(0) << std::endl;
}
