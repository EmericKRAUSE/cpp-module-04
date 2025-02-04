#include "../includes/Cat.hpp"

// ####################
// Constructor & Destructor
Cat::Cat() : Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	setType(copy.getType());
	this->brain = new Brain(*copy.brain);
}

Cat::~Cat()
{
	std::cout << "Cat Default destructor called" << std::endl;
	delete brain;
}

// ####################
// Operator Overload
Cat& Cat::operator=(const Cat& obj)
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
// Getters and Setters
std::string Cat::getIdea(const int index) const
{
	if (this->brain)
		return (this->brain->getIdea(index));
	else
		return ("");
}

void Cat::setIdea(const std::string& idea, const int index)
{
	if (this->brain)
		this->brain->setIdea(idea, index);
}

// ####################
// Methodes
void Cat::makeSound() const 
{ std::cout << "Miaou!" << std::endl; }
