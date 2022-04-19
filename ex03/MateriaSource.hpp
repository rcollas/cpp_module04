#ifndef CPP_MODULE04_MATERIASOURCE_HPP
#define CPP_MODULE04_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const &rhs);

		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria *m_materia[4];
};


#endif
