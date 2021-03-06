#include "Exercicio9ArvoreBinaria.h"

template<typename T>
class BinarySearchTree
{

	class BSTNode {
	public:
		T value;
		std::unique_ptr<BSTNode> left;
		std::unique_ptr<BSTNode> right;

		BSTNode(T v) { value = v; }
	};


public:
	BinarySearchTree() {}

	InsertionInfo insert(T v) {
		return insert(v, root);
	}

	SearchInfo search(T v) {
		return search(v, root);
	}

	DeleteInfo del(T v) {
		return del(v, root);
	}

	void print() {
		print(root);
	}

private:
	std::unique_ptr<BSTNode> root;


	InsertionInfo insert(T v, std::unique_ptr<BSTNode>& node) {

		if (!node) {
			node = std::make_unique<BSTNode>(v);
			return InsertionInfo::Inserted;
		}

		if (v == node->value) {
			return InsertionInfo::AlreadyIn;
		}

		return (v < node->value) ? insert(v, node->left) : insert(v, node->right);
	}


	SearchInfo search(T v, std::unique_ptr<BSTNode>& node) {

		if (!node) {
			return SearchInfo::NotFound;
		}

		if (v == node->value) {
			return SearchInfo::Found;
		}

		return (v < node->value) ? search(v, node->left) : search(v, node->right);
	}

	DeleteInfo del(T v, std::unique_ptr<BSTNode>& node) {

		if (!node) {
			return DeleteInfo::NotDeleted;
		}

		if (v == node->value) {
			(*node->right) ? node->value = *node->right : node->value = *node->left;
			return DeleteInfo::Deleted;
		}

		return (v < node->value) ? del(v, node->left) : del(v, node->right);
	}

	void print(std::unique_ptr<BSTNode>& node) {
		if (!node) {
			return;
		}
		else {
			print(node->left);
			std::cout << node->value << "\t";
			print(node->right);
		}
	}
};
