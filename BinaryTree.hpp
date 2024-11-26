// Not necessary

//#ifndef BINARY_TREE_HPP
//#define BINARY_TREE_HPP
//
//#include "Node.hpp"
//
//template<typename T>
//
//class BinaryTree {
//
//public:
//	void insert_node(Node<T>& newNode, Node<T>* nodeToInsertOn, bool insertOnLeft) {
//		if (rootNode == nullptr){
//			rootNode = &newNode;
//			return;
//		}
//
//		if (nodeToInsertOn == nullptr) {
//			nodeToInsertOn = rootNode;
//		}
//
//		if (insertOnLeft) {
//			nodeToInsertOn->leftNodePtr = &newNode;
//		}
//		else {
//			nodeToInsertOn->rightNodePtr = &newNode;
//		}
//	}
//
//	Node<T>* get_root_node() {
//		return rootNode;
//	}
//
//private:
//	Node<T>* rootNode;
//
//};
//
//#endif // !BINARY_TREE_HPP
