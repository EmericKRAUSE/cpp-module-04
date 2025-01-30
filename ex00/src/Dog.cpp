#include "../includes/Dog.hpp"

// ####################
// Constructor & Destructor
Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog()
{ std::cout << "Dog Default destructor called" << std::endl; }

// ####################
// Operator Overload
Dog& Dog::operator=(const Dog& obj)
{
	if (this != &obj)
		setType(obj.getType());

	return (*this);
}

// ####################
// Methodes
void Dog::makeSound() const
{ std::cout << "Woof Woof!" << std::endl; }
