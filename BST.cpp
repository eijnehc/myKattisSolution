#include <bits/stdc++.h>
using namespace std;

template<typename T>
struct node {
	T val;
	node<T>* l;
	node<T>* r;
	node(T _val) : val(_val), l(NULL), r(NULL) {};
};

template<typename T>
struct BST {
private:
	node<T>* root;

	node<T>* find_max(node<T>* cur) {
		while (cur->r != NULL) {
			cur = cur->r;
		}
		return cur;
	}

	node<T>* insert(node<T>* cur, T val) {
		if (cur == NULL) {
			return new node<T>(val);
		}
		else if (cur->val > val) {
			cur->l = insert(cur->l, val);
		}
		else if (cur->val < val) {
			cur->r = insert(cur->r, val);
		}
		return cur;
		// ignore duplicated nodes
	}

	node<T>* erase(node<T>* cur, T val) {
		if (cur == NULL) {
			return NULL;
		}
		else if (cur->val < val) {
			cur->r = erase(cur->r, val);
		}
		else if (cur->val > val) {
			cur->l = erase(cur->l, val);
		}
		else {
			int c = 0;
			if (cur->l != NULL) {
				c++;
			}
			if (cur->r != NULL) {
				c++;
			}
			if (c == 0) {
				delete cur;
				return NULL;
			}
			else if (c == 1) {
				node<T>* aux = cur;
				if (cur->l != NULL) {
					cur = cur->l;
				}
				else {
					cur = cur->r;
				}
				delete aux;
				return cur;
			}
			else {
				node<T>* successor = find_max(cur->l);
				cur->val = successor->val;
				cur->l = erase(cur->l, successor->val);
			}
		}
		return cur;
	}

	void inorder(node<T>* cur) {
		if (cur == NULL) {
			return;
		}
		inorder(cur->l);
		cout << " " << cur->val;
		inorder(cur->r);
	}

public:
	BST() : root(NULL) {};

	void insert(T val) {
		root = insert(root, val);
	}

	void erase(T val) {
		root = erase(root, val);
	}

	void inorder() {
		cout << "Tree Elements:";
		if (root == NULL) {
			cout << " currently empty" << endl;
		}
		else {
			inorder(root);
			cout << endl;			
		}
	}
};

int main() {
	srand(time(NULL));
	BST<int> t;
	for (int i = 0; i < 100; i++) {
		int cmd = rand() % 2;
		int val = rand() % 10;
		if (cmd == 0) {
			cout << "Inserting " << val << endl;
			t.insert(val);
		}
		else {
			cout << "Erasing " << val << endl;
			t.erase(val);
		}
		t.inorder();
		cout << endl;
	}
}