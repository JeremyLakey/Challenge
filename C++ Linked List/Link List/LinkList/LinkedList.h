#ifndef LINKED_LIST_H
#define LINKED_LIST_H


template <class T>
class LinkedList {
public:
	LinkedList();

	void add(T value);

	T get();

	void next();

	void reset();

	void reverse();

private:
	struct node {
		T item;
		node* next;
	};

	node* head;
	node* current;

	
};

template <class T>
LinkedList<T>::LinkedList() {
	this->head = 0;
	this->current = 0;
}

template <class T>
void LinkedList<T>::add(T value) {
	node* adding = new node();
	adding->item = value;
	adding->next = 0;
	node* temp = this->head;
	if (temp == 0x00000000) {
		this->head = adding;
		this->current = adding;
		return;
	}
	while (temp->next != 0) temp = temp->next;
	temp->next = adding;
}

template <class T>
void LinkedList<T>::reset() {
	this->current = this->head;
}

template <class T>
void LinkedList<T>::next() {
	this->current = this->current->next;
}

template <class T>
T LinkedList<T>::get() {
	return this->current->item;
}

template <class T>
void LinkedList<T>::reverse() {
	node* prev = NULL;
	node* next = NULL;
	this->current == this->head;
	while (this->current != NULL) {
		next = this->current->next;
		this->current->next = prev;
		prev = this->current;
		this->current = next;
	}
	this->current = prev;
	this->head = prev;
}




#endif
