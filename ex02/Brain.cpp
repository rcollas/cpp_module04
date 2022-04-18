#include "Brain.hpp"

Brain::Brain() {

	std::cout << "\x1B[0mBrain created \033[0m" << std::endl;
}


Brain::~Brain() {

	std::cout << "\x1B[0mBrain has been destroyed \033[0m" << std::endl;
}

Brain::Brain(Brain const &src) {

	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}
