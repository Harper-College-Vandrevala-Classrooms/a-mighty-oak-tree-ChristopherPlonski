#include <cassert>
#include <iostream>

//#include "BinaryTree.hpp"
#include "Node.hpp"

using namespace std;

class Squirrel {
private:
    string name;

public:
    Squirrel(string name) {
        this->name = name;
    }

    string get_name() {
        return this->name;
    }
};

int main() {
    cout << "Starting BinaryTree tests.\n";

    Squirrel squirrel1 = Squirrel("Squirrel 1");
    Squirrel squirrel2 = Squirrel("Squirrel 2");
    Squirrel squirrel3 = Squirrel("Squirrel 3");

    Node<Squirrel&> nodeSquirrel1 = Node<Squirrel&>{ squirrel1, nullptr, nullptr };
    Node<Squirrel&> nodeSquirrel2 = Node<Squirrel&>{ squirrel2, nullptr, nullptr };
    Node<Squirrel&> nodeSquirrel3 = Node<Squirrel&>{ squirrel3, nullptr, nullptr };

    nodeSquirrel1.leftNodePtr = &nodeSquirrel2;
    nodeSquirrel1.rightNodePtr = &nodeSquirrel3;

    assert(nodeSquirrel1.data.get_name() == "Squirrel 1");
    assert(nodeSquirrel1.leftNodePtr == &nodeSquirrel2);
    assert(nodeSquirrel1.leftNodePtr->data.get_name() == "Squirrel 2");
    assert(nodeSquirrel1.rightNodePtr == &nodeSquirrel3);
    assert(nodeSquirrel1.rightNodePtr->data.get_name() == "Squirrel 3");

    //BinaryTree<Squirrel> binaryTree = BinaryTree<Squirrel>();

    //binaryTree.insert_node(nodeSquirrel1, binaryTree.get_root_node(), true); // Becomes root node
    //assert(binaryTree.get_root_node() == &nodeSquirrel1);
    //
    //binaryTree.insert_node(nodeSquirrel2, binaryTree.get_root_node(), true); // Becomes left of root node
    //assert(binaryTree.get_root_node()->leftNodePtr == &nodeSquirrel2);

    //binaryTree.insert_node(nodeSquirrel3, binaryTree.get_root_node(), false); // Becomes right of root node
    //assert(binaryTree.get_root_node()->rightNodePtr == &nodeSquirrel3);

    cout << "BinaryTree tests finished.\n";
    return 0;
}