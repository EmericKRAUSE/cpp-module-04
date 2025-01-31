#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		// ####################
		// Constructor & Destructor
		Brain();
		Brain(const Brain& copy);
		~Brain();

		// ####################
		// Operator Overload
		Brain &operator=(const Brain& obj);

		// ####################
		// Methodes
		//void setAnIdea(std::string idea, int i);
		//void print
};

#endif
