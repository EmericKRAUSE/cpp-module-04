#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		// ####################
		// Constructor & Destructor
		WrongCat();
		WrongCat(const WrongCat &copy);
		virtual ~WrongCat();

		// ####################
		// Operator Overload
		WrongCat &operator=(const WrongCat& obj);
};

#endif
