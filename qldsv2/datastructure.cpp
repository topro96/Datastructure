//#include "datastructure.h"
//
//using namespace std;
//
//template <class Type>
//void Tree<Type>::display(TNode<Type> * leaf)
//{
//	if (NULL != leaf)
//	{
//		cout << "\n" << leaf->key_value;
//
//		display(leaf->left);
//		display(leaf->right);																																															
//	}
//}
//
//template <class Type>
//void Tree<Type>::destroy_tree(TNode<Type> * leaf)
//{
//	if (leaf != NULL)
//	{
//		destroy_tree(leaf->left);
//		destroy_tree(leaf->right);
//		delete leaf;
//	}
//}
//
//template <class Type>
//void Tree<Type>::insert(int key, TNode<Type> * leaf)
//{
//	if (key< leaf->key_value)
//	{
//		if (leaf->left != NULL)
//			insert(key, leaf->left);
//		else
//		{
//			leaf->left = new TNode;
//			leaf->left->key_value = key;
//			leaf->left->left = NULL;    //Sets the left child of the child node to null
//			leaf->left->right = NULL;   //Sets the right child of the child node to null
//		}
//	}
//	else if (key >= leaf->key_value)
//	{
//		if (leaf->right != NULL)
//			insert(key, leaf->right);
//		else
//		{
//			leaf->right = new TNode;
//			leaf->right->key_value = key;
//			leaf->right->left = NULL;  //Sets the left child of the child node to null
//			leaf->right->right = NULL; //Sets the right child of the child node to null
//		}
//	}
//}
//
//template <class Type>
//TNode<Type> * Tree<Type>::search(int key, TNode * leaf)
//{
//	if (leaf != NULL)
//	{
//		if (key == leaf->key_value)
//			return leaf;
//		if (key<leaf->key_value)
//			return search(key, leaf->left);
//		else
//			return search(key, leaf->right);
//	}
//	else return NULL;
//}
//
//template <class Type>
//Tree<Type>::Tree()
//{
//	root = NULL;
//}
//
//template <class Type>
//void Tree<Type>::Insert(int key)
//{
//	if (root != NULL)
//		insert(key, root);
//	else
//	{
//		root = new TNode;
//		root->key_value = key;
//		root->left = NULL;
//		root->right = NULL;
//	}
//}
//
//
//
//template <class Type>
//TNode<Type> *Tree<Type>::Search(int key)
//{
//	return search(key, root);
//}
//
//template <class Type>
//void Tree::Destroy()
//{
//	destroy_tree(root);
//}
//
//template <class Type>
//void Tree::Display()
//{
//	display(root);
//}
//
//template<class Type>
//void LinkedList::ThemNode(LNode * pHead, LNode * new_node)
//{
//	if (pHead == NULL)
//	{
//		new_node = pHead;
//	}
//	else
//	{
//		//Xac dinh Node cuoi cung
//		LNode<Type> * ending_node = NULL;
//		{
//			//Node cuoi cung la node ma bien Next cua no chua dia chi null
//			for (LNode *k = pHead; k != NULL; k = k->Next)
//			{
//				if (k->Next == NULL)
//				{
//					ending_node = k;
//				}
//			}
//		}
//		//Noi end_node den node moi
//		ending_node->Next = new_node;
//	}
//}
//
//template <class Type>
//TNode::TNode()
//{
//	key_value = 0;
//	left = NULL;
//	right = NULL;
//}
