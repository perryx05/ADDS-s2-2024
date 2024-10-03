#ifndef TREE
#define TREE

#include <vector>

template <class T>
class Tree
{
private:
    struct Node
    {
        T data;
        std::vector<Node *> childNodes;
    };

    Node *root;

public:
    Tree()
    {
        root = nullptr;
    }

    void insert(T value)
    {
        Node * newNode = new Node();
        newNode->data = value;
        // add node to tree - dependent on type of tree
    }

    void remove(T value)
    {
        // delete from tree - dependent on type of tree
    }

    bool search(T value)
    {
        bool found = false;
        // returns true if value found in tree, false if not found
        return found;
    }
};

#endif