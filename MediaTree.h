#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include "MediaNode.h"
#include "Media.h"
#include "Classic.h"
#include "Drama.h"
#include "Comedy.h"
#include <queue>
using namespace std;

//template <class T>
class MediaTree {
private:
	MediaNode * root;

public:
	//MediaTree(const MediaTree &t);
	MediaTree();
	void setRoot(MediaNode * root);
	MediaNode * getRoot() const;
	void insert(Media * data);
	MediaNode * insert(MediaNode * n, Media * data);
	//bool find(MediaNode * n, Media data);
	void preOrderTraversal(MediaNode * n);
	void postOrderTraversal(MediaNode * n);
	void inOrderTraversal(MediaNode * n);
	void BFPrint(MediaNode * n);
	//bool BFSearch(MediaNode * n, Media data);
	MediaNode * copyMediaTree(MediaNode * orig);
	friend ostream& operator<<(ostream &out, const MediaTree&);
	ostream& inorderHelper(ostream &os, MediaNode * n) const;
};
