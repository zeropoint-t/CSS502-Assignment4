
#include "pch.h"
#include "InventoryMgr.h"
InventoryMgr::InventoryMgr() {
    /*for (vector<MediaTree*>::iterator it = MediaTreesVec.begin(); it != MediaTreesVec.end(); it++) {
     *it = new MediaTree();
     }*/
}

bool InventoryMgr::insert(Media * med) {
    //cout << typeid(*med).name() << endl;
    //const string s = string(typeid(*med).name());
    //cout << s << endl;
    MediaTree* temp = nullptr;
    MediaTree* current = nullptr;
    bool classfound = false;
    for (vector<MediaTree*>::iterator it = MediaTreesVec.begin(); it != MediaTreesVec.end(); it++) {
        //cout << "step1" << endl;
        current = *it;
        //cout << "existing trees already have " << typeid(*temp2->getRoot()->getData()).name() << endl;
        if (typeid(*(current->getRoot()->getData())).name() == typeid(*med).name()) { // no trees
            cout << "another " << typeid(*med).name() << "film" << endl;
            temp = *it;
        }
        //else {
        //    //if (typeid(temp.getData()).name() == typeid(*med).name()) { // found the root of a tree of class type
        //    //        //MediaNode temp = *it;
        //    //    comedyTree.inser
        //    //        cout << temp.getData() << endl;
        //    //    //}
        //    }
        
    }
    //if (MediaTreesVec.size() == 0 || classfound == false) {
    if (temp == nullptr && (string(typeid(*med).name())).compare("class Comedy") == 0) {
        cout << "Comedy Film" << endl;
        MediaTree * comedyTree = new MediaTree();
        cout << "Comedy Tree Created" << endl;
        comedyTree->insert(med);
        cout << "Comedy Tree PushedBack" << endl;
        MediaTreesVec.push_back(comedyTree);
        return true;
    }
    if (temp == nullptr && (string(typeid(*med).name())).compare("class Classic") == 0) {
        cout << "Classic Film" << endl;
        MediaTree * classicTree = new MediaTree();
        cout << "Classic Tree Created" << endl;
        classicTree->insert(med);
        cout << "Classic Tree PushedBack" << endl;
        MediaTreesVec.push_back(classicTree);
        return true;
    }
    if (temp == nullptr && (string(typeid(*med).name())).compare("class Drama") == 0) {
        cout << "Drama Film" << endl;
        MediaTree * dramaTree = new MediaTree();
        cout << "Drama Tree Created" << endl;
        dramaTree->insert(med);
        cout << "Drama Tree PushedBack" << endl;
        MediaTreesVec.push_back(dramaTree);
        return true;
    }
    if (temp != nullptr && (string(typeid(*med).name())).compare("class Comedy") == 0) {
        cout << "Comedy Film" << endl;
        cout << "Comedy Tree already exists" << endl;
        temp->insert(med);
        return true;
    }
    if (temp != nullptr && (string(typeid(*med).name())).compare("class Classic") == 0) {
        cout << "Classic Film" << endl;
        cout << "Classic Tree already exists" << endl;
        temp->insert(med);
        return true;
    }
    if (temp != nullptr && (string(typeid(*med).name())).compare("class Drama") == 0) {
        cout << "Drama Film" << endl;
        cout << "Drama Tree already exists" << endl;
        temp->insert(med);
        return true;
    }
    //}
    return false;
}

void InventoryMgr::printInv() {
    for (vector<MediaTree*>::iterator it = MediaTreesVec.begin(); it != MediaTreesVec.end(); it++) {
        MediaTree * temp = *it;
        temp->inOrderTraversal(temp->getRoot());
        //cout << endl;
    }
}
