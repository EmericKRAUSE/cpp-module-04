#include "../includes/Animal.hpp"

// ####################
// Constructor & Destructor
Animal::Animal()
	: type("Default Animal")
{ std::cout << "Animal Default constructor called" << std::endl; }

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{ std::cout << "Animal Default destructor called" << std::endl; }

// ####################
// Operator Overload
Animal& Animal::operator=(const Animal& obj)
{
	if (this != &obj)
		setType(obj.getType());

	return (*this);
}

// ####################
// Getters & Setters
std::string Animal::getType() const
{ return (this->type); }

void Animal::setType(const std::string& type)
{ this->type = type; }

// ####################
// Methodes
void Animal::makeSound() const
{ std::cout << "I am an animal with no type..." << std::endl; }
