#ifndef NODE_HPP
#define NODE_HPP

template<typename T>

struct Node {

public:
	T data;
	Node<T>* leftNodePtr;
	Node<T>* rightNodePtr;

};

#endif // !NODE_HPP