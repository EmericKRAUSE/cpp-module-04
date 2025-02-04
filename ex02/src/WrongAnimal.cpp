#include "../includes/WrongAnimal.hpp"

// ####################
// Constructor & Destructor
WrongAnimal::WrongAnimal()
	: type("Default WrongAnimal")
{ std::cout << "WrongAnimal Default constructor called" << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{ std::cout << "WrongAnimal Default destructor called" << std::endl; }

// ####################
// Operator Overload
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	if (this != &obj)
		setType(obj.getType());

	return (*this);
}

// ####################
// Getters & Setters
std::string WrongAnimal::getType() const
{ return (this->type); }

void WrongAnimal::setType(const std::string &type)
{ this->type = type; }

// ####################
// Methodes
void WrongAnimal::makeSound() const
{ std::cout << "I am a WrongAnimal with no type..." << std::endl; }
