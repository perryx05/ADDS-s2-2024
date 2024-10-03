#include <iostream>
#include <cmath>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////

Node* LinkedList::tranverse(int pos){
	unsigned int curr_pos = 0;
	Node* currNode = head;

	if (currNode == nullptr) return nullptr;
	while(currNode != nullptr && curr_pos < pos){
		curr_pos++;
		currNode = currNode->link;
	}

	return currNode;
}

bool LinkedList::swap(int pos1, int pos2) {
	Node* prevNode1;
	Node* prevNode2;
	if (pos1 == 0) {
		prevNode1 = head;
	}
	else prevNode1 = tranverse(pos1 - 1);

	if (pos2 == 0) {
	}
	else prevNode2 = tranverse(pos2 - 1);

	

	if (prevNode1 == nullptr || prevNode2 == nullptr) return false;
	
	Node* tmp1 = prevNode1->link;
	Node* tmp2 = prevNode2->link->link;
	Node* currNode1 = prevNode1->link;
	Node* currNode2 = prevNode2->link;

	prevNode1->link = prevNode2->link;
	prevNode2->link = tmp1;
	
	currNode1->link = currNode2->link;
	currNode2->link = tmp2;

	
	

	// Node* currNode1 = prevNode1->link;
	// Node* currNode2 = prevNode2->link;

	// Node* tmp2 = currNode1->link;
	// currNode1->link = currNode2->link;
	// currNode2 = tmp2;

	// std::cout << prevNode1->link->data << std::endl;
	return true;
}

bool LinkedList::find_and_delete(int target) {
	Node* currNode = head;
	if (currNode == nullptr) return false;
	if (currNode->data == target) {
		head = head->link;
		return true;
	}

	bool check = false;

	while(currNode != nullptr){
		if (currNode->link->data == target) {
			check = true;
			break;
		}
		currNode = currNode->link;
	}

	// if (check == true) 

	if (check == true) {
		Node* deletedNode = currNode->link;
		currNode->link = deletedNode->link;
		return true;
	}
	else return false;
}