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
		// Getters and Setters
		std::string getIdea(const int index) const;
		void setIdea(const std::string& idea, const int index);

		// ####################
		// Methodes
		virtual void makeSound() const;
};

#endif
