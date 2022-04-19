#ifndef CPP_MODULE04_BRAIN_HPP
#define CPP_MODULE04_BRAIN_HPP

#include <iostream>

class Brain {

	public:
		Brain();
		Brain(Brain const &src);
		~Brain();

		Brain &operator=(Brain const &rhs);
		void setIdea(std::string idea, int index);
		std::string getIdea(int index);

	private:
		std::string m_ideas[100];
};


#endif
