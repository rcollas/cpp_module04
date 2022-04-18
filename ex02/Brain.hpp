#ifndef CPP_MODULE04_BRAIN_HPP
#define CPP_MODULE04_BRAIN_HPP

#include <iostream>

class Brain {

	public:
		Brain();
		Brain(Brain const &src);
		~Brain();

		Brain &operator=(Brain const &rhs);

	private:
		std::string ideas[100];
};


#endif
