#include "Node.h"

Node::Node(int data, Node* link) {
    this->data = data;
    this -> link = link;
}

int Node::getData() const {
    return data;
}

Node* Node::getLink() const {
    return link;
}

void Node::setLink(Node* link) {
    this->link = link;
}