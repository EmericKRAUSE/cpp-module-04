#include "../includes/Cat.hpp"

// ####################
// Constructor & Destructor
Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat()
{ std::cout << "Cat Default destructor called" << std::endl; }

// ####################
// Operator Overload
Cat& Cat::operator=(const Cat& obj)
{
	if (this != &obj)
		setType(obj.getType());

	return (*this);
}

// ####################
// Methodes
void Cat::makeSound() const 
{ std::cout << "Miaou!" << std::endl; }
