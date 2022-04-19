#include "ItemsHistory.hpp"

Node::Node() {

	m_value = 0;
	m_next = 0;
}

Node::Node(AMateria* materia) {

	this->m_value = materia;
	this->m_next = 0;
}

Node::~Node() {

}

LinkedList::LinkedList() {

	m_head = NULL;
}

LinkedList::~LinkedList() {

	Node* tmp = m_head;
	Node* toDelete;

	while (tmp) {
		delete tmp->m_value;
		toDelete = tmp;
		tmp = tmp->m_next;
		delete toDelete;
	}
}

#include <iostream>

Node* LinkedList::last() {

	Node* tmp = m_head;

	while (tmp->m_next)
		tmp = tmp->m_next;
	return tmp;
}

void LinkedList::add(AMateria *materia) {

	//Node* last = this->last();
	Node* newNode = new Node(materia);

	if (!m_head) {
		m_head = newNode;
	} else {
		Node* last = this->last();
		last->m_next = newNode;
	}
}

void LinkedList::print() {

	Node* tmp = m_head;
	while (tmp) {
		std::cout << "AMateria type = " << tmp->m_value->getType() << std::endl;
		tmp = tmp->m_next;
	}
}
