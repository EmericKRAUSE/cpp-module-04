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
		// Getters and Setters
		std::string getIdea(const int index) const;
		void setIdea(const std::string& idea, const int index);

		// ####################
		// Methodes
		virtual void makeSound() const;
};

#endif
