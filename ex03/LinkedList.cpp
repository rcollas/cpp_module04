#include "LinkedList.hpp"
#include <iostream>

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
		tmp->m_value = 0;
		toDelete = tmp;
		tmp = tmp->m_next;
		delete toDelete;
		toDelete = 0;
	}
}

Node* LinkedList::last() {

	Node* tmp = m_head;

	while (tmp->m_next)
		tmp = tmp->m_next;
	return tmp;
}

void LinkedList::add(AMateria *materia) {

	Node* newNode = new Node(materia);

	if (!m_head) {
		m_head = newNode;
	} else {
		Node* last = this->last();
		last->m_next = newNode;
	}
}

void LinkedList::erase(AMateria *materia) {

	Node* tmp = m_head;
	Node* prev = 0;

	if (tmp != 0 && tmp->m_value == materia) {
		m_head = tmp->m_next;
		delete tmp->m_value;
		tmp->m_value = 0;
		delete tmp;
		tmp = 0;
		return ;
	} else {
		while (tmp && tmp->m_value != materia) {
			prev = tmp;
			tmp = tmp->m_next;
		}
		if (tmp == 0) {
			return;
		}
		prev->m_next = tmp->m_next;
		delete tmp->m_value;
		tmp->m_value = 0;
		delete tmp;
		tmp = 0;
	}
}


void LinkedList::print() {

	Node* tmp = m_head;
	while (tmp) {
		std::cout << "AMateria type = " << tmp->m_value->getType() << std::endl;
		tmp = tmp->m_next;
	}
}
