#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:
		// ####################
		// Constructor & Destructor
		Cat();
		Cat(const Cat& copy);
		virtual ~Cat();

		// ####################
		// Operator Overload
		Cat& operator=(const Cat& obj);

		// ####################
		// Methodes
		virtual void makeSound() const;
};

#endif
