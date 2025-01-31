#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;
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
