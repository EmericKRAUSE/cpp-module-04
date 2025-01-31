#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;
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
