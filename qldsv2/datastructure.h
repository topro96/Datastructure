#pragma once
#include <iostream>

using namespace std;

template<class Type>
struct LinkedList;



static unsigned long GetKey(const std::string& str)
{
	unsigned long hash = 5381;
	for (size_t i = 0; i < str.size(); ++i)
		hash = 33 * hash + (unsigned char)str[i];
	return hash;
}

template <class Data>
class  TNode
{
private:
public:
	long key_value;
	TNode *left;
	TNode *right;

	Data data;
	TNode();
	TNode(long key, Data _data);
};


template<class Type >
class Tree
{
public:
	Tree();

	void Insert(long key, Type data);
	TNode<Type> *Search(long key);
	void Destroy();
	LinkedList<Type> GetNode();
	void DeleteNode(long key);

private:
	void destroy_tree(TNode<Type> *leaf);
	void insert(long key, TNode<Type> *leaf, TNode<Type> *new_node);
	TNode<Type> *search(long key, TNode<Type> *leaf);

	TNode<Type> *root;

	TNode<Type> * minValueNode( TNode<Type>* node);

	TNode<Type>* deleteNode( TNode<Type>* root, long key);

	void getNode(TNode<Type> *leaf, LinkedList<Type> & result);
};

template<class Data>
struct LNode
{
	LNode * Next;
	Data data;

	LNode(Data _data);
	LNode();
};

template<class Type>
struct LinkedList
{
	LNode<Type> * pHead;
	void ThemNode(Type new_node);

	LinkedList();
private:
	void ThemNode(LNode<Type> * &pHead, LNode<Type> *new_node);
};

template<class Data>
inline LNode<Data>::LNode(Data _data)
{
	Next = NULL;
	data = _data;
}

template<class Data>
inline LNode<Data>::LNode()
{
	Next = NULL;
}

template <class Type>
inline void Tree<Type>::destroy_tree(TNode<Type> * leaf)
{
	if (leaf != NULL)
	{
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}



template <class Type>
inline void Tree<Type>::insert(long key, TNode<Type> * leaf, TNode<Type> *new_node)
{
	if (key < leaf->key_value)
	{
		if (leaf->left != NULL)
			insert(key, leaf->left, new_node);
		else
		{
			leaf->left = new_node;
		}
	}
	else if (key >= leaf->key_value)
	{
		if (leaf->right != NULL)
			insert(key, leaf->right, new_node);
		else
		{
			leaf->right = new_node;
		}
	}
}

template <class Type>
inline TNode<Type> * Tree<Type>::search(long key, TNode<Type> * leaf)
{
	if (leaf != NULL)
	{
		if (key == leaf->key_value)
			return leaf;
		if (key < leaf->key_value)
			return search(key, leaf->left);
		else
			return search(key, leaf->right);
	}
	else return NULL;
}

template<class Type>
inline TNode<Type>* Tree<Type>::minValueNode(TNode<Type>* node)
{
	TNode<Type>* current = node;

	/* loop down to find the leftmost leaf */
	while (current && current->left != NULL)
		current = current->left;

	return current;
}

template<class Type>
inline TNode<Type>* Tree<Type>::deleteNode(TNode<Type>* root, long key)
{
	// base case 
	if (root == NULL) return root;

	// If the key to be deleted is smaller than the root's key, 
	// then it lies in left subtree 
	if (key < root->key_value)
		root->left = deleteNode(root->left, key);

	// If the key to be deleted is greater than the root's key, 
	// then it lies in right subtree 
	else if (key > root->key_value)
		root->right = deleteNode(root->right, key);

	// if key is same as root's key, then This is the node 
	// to be deleted 
	else
	{
		// node with only one child or no child 
		if (root->left == NULL)
		{
			TNode<Type> *temp = root->right;
			delete root;
			return temp;
		}
		else if (root->right == NULL)
		{
			TNode<Type> *temp = root->left;
			delete root;
			return temp;
		}

		// node with two children: Get the inorder successor (smallest 
		// in the right subtree) 
		TNode<Type> * temp = minValueNode(root->right);

		// Copy the inorder successor's content to this node 
		root->key_value = temp->key_value;

		// Delete the inorder successor 
		root->right = deleteNode(root->right, temp->key_value);
	}
	return root;
}

template<class Type>
inline void Tree<Type>::getNode(TNode<Type>* leaf, LinkedList<Type>& result)
{
	if (NULL != leaf)
	{
		result.ThemNode(leaf->data);
		getNode(leaf->left, result);
		getNode(leaf->right, result);
	}
}


template <class Type>
inline Tree<Type>::Tree()
{
	root = NULL;
}

template <class Type>
inline void Tree<Type>::Insert(long key, Type data)
{
	TNode<Type> * new_node = new TNode<Type>(key, data);

	if (root != NULL)
		insert(key, root, new_node);
	else
	{
		root = new_node;
	}
}



template <class Type>
inline TNode<Type> *Tree<Type>::Search(long key)
{
	return search(key, root);
}

template <class Type>
inline void Tree<Type>::Destroy()
{
	destroy_tree(root);
}

template<class Type>
inline LinkedList<Type> Tree<Type>::GetNode()
{
	LinkedList<Type> result = LinkedList<Type>();
	getNode(root, result);
	return result;
}


template<class Type>
inline void Tree<Type>::DeleteNode(long key)
{
	root = deleteNode(root, key);
}


template<class Type>
inline void LinkedList<Type>::ThemNode(Type new_node)
{
	LNode<Type> * node = new LNode<Type>(new_node);
	ThemNode(pHead, node);
}

template<class Type>
inline LinkedList<Type>::LinkedList()
{
	pHead = NULL;
}

template<class Type>
inline void LinkedList<Type>::ThemNode(LNode<Type> * & pHead, LNode<Type> * new_node)
{
	if (pHead == NULL)
	{
		pHead = new_node;
	}
	else
	{
		//Xac dinh Node cuoi cung
		LNode<Type> * ending_node = NULL;
		{
			//Node cuoi cung la node ma bien Next cua no chua dia chi null
			for (LNode<Type> *k = pHead; k != NULL; k = k->Next)
			{
				if (k->Next == NULL)
				{
					ending_node = k;
				}
			}
		}
		//Noi end_node den node moi
		ending_node->Next = new_node;
	}
}


template <class Type>
inline TNode<Type>::TNode()
{
	key_value = 0;
	left = NULL;
	right = NULL;
}

template<class Data>
inline TNode<Data>::TNode(long key, Data _data)
{
	key_value = key;
	left = NULL;
	right = NULL;
	data = _data;
}
