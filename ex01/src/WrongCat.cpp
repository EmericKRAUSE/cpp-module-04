#include "../includes/WrongCat.hpp"

// ####################
// Constructor & Destructor
WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	*this = copy;
	std::cout << "WrongCat Copy constructor called" << std::endl;
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
