#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		// ####################
		// Constructor & Destructor
		Dog();
		Dog(const Dog& copy);
		virtual ~Dog();

		// ####################
		// Operator Overload
		Dog& operator=(const Dog& obj);

		// ####################
		// Methodes
		virtual void makeSound() const;
};

#endif
