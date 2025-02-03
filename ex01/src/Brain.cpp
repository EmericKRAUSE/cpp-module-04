#include "../includes/Brain.hpp"

// ####################
// Constructor & Destructor
Brain::Brain()
{ std::cout << "Brain Default constructor called" << std::endl; }

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain()
{ std::cout << "Brain destructor called" << std::endl; }

// ####################
// Operator Overload
Brain& Brain::operator=(const Brain& obj)
{
	if (this != &obj)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	return (*this);
}

// ####################
// Getter and Setters
void Brain::setIdea(const std::string& idea, const int index)
{
	if (index < 0 || index > 99)
	{
		std::cout << "Wrong index..." << std::endl;
		return ;
	}
	this->ideas[index] = idea;
}

std::string Brain::getIdea(const int index) const
{
	if (index < 0 || index > 99)
	{
		std::cout << "Wrong index..." << std::endl;
		return ("");
	}
	return (this->ideas[index]);
}
