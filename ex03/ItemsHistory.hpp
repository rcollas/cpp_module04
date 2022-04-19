#ifndef CPP_MODULE04_ITEMSHISTORY_HPP
#define CPP_MODULE04_ITEMSHISTORY_HPP

#include "AMateria.hpp"

class Node {
	public:
		Node();
		Node(AMateria* materia);
		~Node();

		Node* m_next;
		AMateria* m_value;
};

class LinkedList {

	public:
		LinkedList();
		~LinkedList();

		void add(AMateria* materia);
		void print();

	private:
		Node* last();
		Node* m_head;
};

class ItemsHistory {

	public:
		ItemsHistory();
		~ItemsHistory();
	private:

};


#endif
