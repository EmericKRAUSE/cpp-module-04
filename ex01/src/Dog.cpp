#include "../includes/Dog.hpp"

// ####################
// Constructor & Destructor
Dog::Dog() : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	setType(copy.getType());
	this->brain = new Brain(*copy.brain);
}

Dog::~Dog()
{
	std::cout << "Dog Default destructor called" << std::endl;
	delete brain;
}

// ####################
// Operator Overload
Dog& Dog::operator=(const Dog& obj)
{
	if (this != &obj)
	{
		setType(obj.getType());
		delete this->brain;
		this->brain = new Brain(*obj.brain);
	}

	return (*this);
}

// ####################
// Methodes
void Dog::makeSound() const
{ std::cout << "Woof Woof!" << std::endl; }
