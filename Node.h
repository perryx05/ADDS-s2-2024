#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {
    private:
    int data;
    Node* link;
    public:
    Node(int data, Node *link = nullptr);
    int getData() const;
    Node* getLink() const;
    void setLink(Node* link);
    
};
#endif 
