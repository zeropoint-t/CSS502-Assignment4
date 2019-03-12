#include "pch.h"
#include "MediaTree.h"


MediaTree::MediaTree() {
	this->root = nullptr;
}


void MediaTree::setRoot(MediaNode * root) {
	this->root = root;
}


MediaNode * MediaTree::getRoot() const {
	return this->root;
}


void MediaTree::insert(Media * data) {
	if (this->root == nullptr) {
		MediaNode * rootempt = new MediaNode(data);
		this->root = rootempt;
		this->root->setLeft(nullptr);
		this->root->setRight(nullptr);
	}
	else if (this->root != nullptr) {
		
		if (*data < *this->root->getData()) {
			cout << "Film is less than" << endl;
			this->root->setLeft(insert(this->root->getLeft(), data));
		}
		else {
			cout << "Film is greater than" << endl;
			this->root->setRight(insert(this->root->getRight(), data));
		}
	}
}


MediaNode * MediaTree::insert(MediaNode * n, Media * data) {
	if (n == nullptr) {
		MediaNode * rootempt = new MediaNode(data);
		n = rootempt;
		n->setLeft(nullptr);
		n->setRight(nullptr);
	}
	else {
		if (*data < *n->getData()) {
			n->setLeft(insert(n->getLeft(), data));
		}
		else {
			n->setRight(insert(n->getRight(), data));
		}
	}
	return n;
}


void MediaTree::preOrderTraversal(MediaNode * n) {
	if (n == nullptr) {
		return;
	}

	cout << n->getData() << "->";

	if (n->getLeft() != nullptr)
		preOrderTraversal(n->getLeft());
	if (n->getRight() != nullptr)
		preOrderTraversal(n->getRight());
}



void MediaTree::postOrderTraversal(MediaNode * n) {
	if (n == nullptr) {
		return;
	}
	if (n->getLeft() != nullptr) {
		postOrderTraversal(n->getLeft());
	}
	if (n->getRight() != nullptr) {
		postOrderTraversal(n->getRight());
	}

	cout << n->getData() << "->";
}

void MediaTree::inOrderTraversal(MediaNode * n) {
	if (n == nullptr) {
		return;
	}
	if (n->getLeft() != nullptr) {
		inOrderTraversal(n->getLeft());
	}
	
	Media * temp = n->getData();

	//cout << typeid(*temp).name() << endl;
	//cout << temp << endl;
	temp->display(); 
	cout << endl;

	if (n->getRight() != nullptr) {
		inOrderTraversal(n->getRight());
	}
}


//bool MediaTree::find(MediaNode * n, Media data) {
//	bool found = false;
//	if (n->getData() == data) {
//		return true;
//	}
//	else {
//		if (n->getLeft() != nullptr && !found)
//			found = find(n->getLeft(), data);
//		if (n->getRight() != nullptr && !found)
//			found = find(n->getRight(), data);
//	}
//	return found;
//}
//
//
//void MediaTree::BFPrint(MediaNode * n) {
//	if (n == nullptr) {
//		return;
//	}
//	queue<MediaNode> q;
//	q.push(*n);
//	while (!q.empty()) {
//		MediaNode temp = q.front();
//		if (temp.getLeft() != nullptr)
//			q.push(*temp.getLeft());
//		if (temp.getRight() != nullptr)
//			q.push(*temp.getRight());
//		cout << temp.getData() << "->";
//		q.pop();
//	}
//}
//
//
//bool MediaTree::BFSearch(MediaNode * n, Media data) {
//	bool found = false;
//	if (n != nullptr) {
//		queue< MediaNode > q;
//		q.push(*n);
//		while (!q.empty()) {
//			MediaNode temp = q.front();
//			cout << temp.getData();
//			if (temp.getData() == data) {
//				found = true;
//				break;
//			}
//			else {
//				cout << "->";
//				if (temp.getLeft() != nullptr && !found)
//					q.push(*temp.getLeft());
//				if (temp.getRight() != nullptr && !found)
//					q.push(*temp.getRight());
//			}
//			q.pop();
//		}
//	}
//	if (found)
//		cout << " Found! =";
//	else
//		cout << " Notfound =";
//	return found;
//}
//
//
//MediaTree::MediaTree(const MediaTree &t) {
//	if (t.getRoot() == nullptr) {
//		this->root = nullptr;
//	}
//	else {
//		this->root = copyMediaTree(t.root);
//	}
//}
//
//
//MediaNode * MediaTree::copyMediaTree(MediaNode * originalnode) {
//	MediaNode * newnode = new MediaNode();
//	if (originalnode == nullptr) {
//		newnode = nullptr;
//	}
//	else {
//		newnode->setData(originalnode->getData());
//		newnode->setLeft(copyMediaTree(originalnode->getLeft()));
//		newnode->setRight(copyMediaTree(originalnode->getRight()));
//	}
//	return newnode;
//}

// --------------------void BinTree::inorderHelper(ostream &out, Node * n) const------------------------------
// Description: helper function for cout function, returns outstream with the tree nodedata strings
// ---------------------------------------------------------------------------------------------------


//ostream& MediaTree::inorderHelper(ostream &os, MediaNode * n) const
//{
//	if (n == nullptr)
//	{
//		return;
//	}
//	if (n->getLeft() != nullptr) {
//		inorderHelper(os, n->getLeft());
//	}
//
//	//cout << "putting movies " << endl;
//	os << n->getData() << endl;
//
//	if (n->getRight() != nullptr)
//	{
//		inorderHelper( os, n->getRight());
//	}
//}

// --------------------ostream& operator<<(ostream &os, const BinTree& n)------------------------------
// Description: cout operator overload, provides outstream for the helper function to return the outstream filled to return it
// ---------------------------------------------------------------------------------------------------

//ostream& operator<<(ostream &os, const MediaTree& n)
//{
//	const string s = string(n.inorderHelper(os, n.getRoot()));
//	os << s << endl;
//		//n.inorderHelper(os,n.getRoot());
//	return os;
//}
