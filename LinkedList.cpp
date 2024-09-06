#include "LinkedList.h"


LinkedList::LinkedList() {
    this -> head = NULL;
}

LinkedList :: LinkedList(int *array, int len){
    this -> head = NULL;
    for (int i = 0; i < len; i++) {
        insertPosition(i+1, array[i]);
    }
}   
LinkedList::~LinkedList() {
    Node* temp = head;
    while (temp != NULL) {
        Node* next = temp -> getLink();
        delete temp;
        temp = next;
    }

}
void LinkedList::insertPosition(int pos, int newNum){
    Node *newNode = new Node(newNum);
    if (pos<=1){
        newNode -> setLink(head);
        head = newNode;
        return;
    } 
    Node *temp = head;
    for (int i = 1; i < pos-1; i++) {
        if (temp->getLink() == NULL) {
            break;
        }
        temp = temp -> getLink();
    }
    newNode -> setLink(temp -> getLink());
    temp -> setLink(newNode);

}
bool LinkedList :: deletePosition(int pos){
    if (pos <= 0 ){
        return false;
    }
    if (pos == 1){
        Node *temp = head;
        head = head -> getLink();
        delete temp;
        return true;
    }
    Node *current = head;
    int position = 1;
    while (current != NULL && position < pos-1){
        current = current -> getLink();
        position++;
    }
    if (current == NULL){
        return false;
    }
    if (current-> getLink() == NULL){
        return false;
    }
    Node *temp = current -> getLink();
    current -> setLink(temp -> getLink());
    delete temp;
    return true;
}
int LinkedList :: get(int pos){
    if (pos <= 0){
        return std::numeric_limits<int>::max();
    }
    Node *current = head;
    int position = 1;
    while (current != NULL && position < pos){
        current = current -> getLink();
        position++;
    }
    if (current == NULL){
        return std::numeric_limits<int>::max();
    }
    return current -> getData();
}
int LinkedList :: search(int target){
    Node *current = head;
    int position = 1;
    while (current != NULL){
        if (current -> getData() == target){
            return position;
        }
        current = current -> getLink();
        position++;
    }
    return -1;
}
void LinkedList :: printList(){
    Node* currNode = head; 
    std::cout<<"[";
    while (currNode != nullptr) { 
        std::cout << currNode->getData(); 
         if (currNode->getLink() != nullptr) {
            std::cout << " ";
        }
        currNode = currNode->getLink(); 
    } 
    std::cout <<"]"<< std::endl; 
}



