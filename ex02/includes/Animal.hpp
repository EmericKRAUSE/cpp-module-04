#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		// ####################
		// Constructor & Destructor
		Animal();
		Animal(const Animal& copy);
		virtual ~Animal();

		// ####################
		// Operator Overload
		Animal& operator=(const Animal& obj);

		// ####################
		// Getters & Setters
		std::string	getType() const;
		void		setType(const std::string& type);

		// ####################
		// Methodes
		virtual void makeSound() const = 0;
};

#endif
