#include "Brain.hpp"

Brain::Brain() {

	std::cout << "\x1B[0mBrain created \033[0m" << std::endl;
}


Brain::~Brain() {

	std::cout << "\x1B[0mBrain has been destroyed \033[0m" << std::endl;
}

Brain::Brain(Brain const &src) {

	*this = src;
}

Brain &Brain::operator=(Brain const &rhs) {

	for (int i = 0; i < 100; i++)
		this->m_ideas[i] = rhs.m_ideas[i];
	return *this;
}

void Brain::setIdea(std::string idea, int index) {

	if (index < 100 && !idea.empty()) {
		this->m_ideas[index] = idea;
	} else {
		std::cout << "\x1B[31mEmpty idea or wrong index \033[0m" << std::endl;
	}
}

std::string Brain::getIdea(int index) {

	if (index < 100 && !m_ideas[index].empty()) {
		return m_ideas[index];
	} else {
		return "\x1B[31mWrong idea's index\033[0m";
	}
}