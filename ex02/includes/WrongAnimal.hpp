#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		// ####################
		// Constructor & Destructor
		WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		virtual ~WrongAnimal();

		// ####################
		// Operator Overload
		WrongAnimal &operator=(const WrongAnimal& obj);

		// ####################
		// Getters & Setters
		std::string	getType() const;
		void		setType(const std::string& type);

		// ####################
		// Methodes
		void makeSound() const;
};

#endif
