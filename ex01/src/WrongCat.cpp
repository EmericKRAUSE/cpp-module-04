#include "../includes/WrongCat.hpp"

// ####################
// Constructor & Destructor
WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{ std::cout << "WrongCat Default destructor called" << std::endl; }

// ####################
// Operator Overload
WrongCat &WrongCat::operator=(const WrongCat& obj)
{
	if (this != &obj)
		setType(obj.getType());

	return (*this);
}
