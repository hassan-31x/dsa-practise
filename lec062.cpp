//? Binary Tree
#include <iostream>
#include<stack>
#include <queue>
using namespace std;

//node: an element in a tree
//root: the topmost node in a tree
//parent: a node that has children
//child: a node that has a parent
//siblings: nodes with the same parent
//ancestor: a node that is on the path from the root to a node
//descendant: a node that is on the path from a node to a leaf
//leaf: a node that has no children

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* createTree(node* root) {
    cout<< "Enter data: "<< endl;
    int data;
    cin >> data;

    if(data == -1) {
        return NULL;
    }

    root = new node(data);

    cout<< "Enter data to insert in left child of "<< data << endl;
    root -> left = createTree(root -> left);
    cout<< "Enter data to insert in right child of "<< data << endl;
    root -> right = createTree(root -> right);

    return root;
}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL); //separator to keep track of when a level ends

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            cout<< endl; //prev level is completed (right most level is out) and next level is started
            if(!q.empty()) { //if there are more levels to traverse
                q.push(NULL); //add a separator at the end of next level as the prev level is completely out (means all of this level is inserted in the queue)
            }
        } else {
            cout<< temp -> data << " "; 
            if(temp -> left) {
                q.push(temp -> left);
            }
            if(temp -> right) {
                q.push(temp -> right);
            }
        }
    }
}

void reverseLevelOrderTraversal(node* root) {
    queue<node*> q;
    stack<node*> s;
    q.push(root);
    q.push(NULL); //separator to keep track of when a level ends

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();
        s.push(temp);

        if(temp == NULL) {
            if(!q.empty()) { //if there are more levels to traverse
                q.push(NULL); //add a separator at the end of next level as the prev level is completely out (means all of this level is inserted in the queue)
            }
        } else {
            if(temp -> right) {
                q.push(temp -> right);
            }
            if(temp -> left) {
                q.push(temp -> left);
            }
        }
    }

    while(!s.empty()) {
        if(s.top() == NULL) {
            cout<< endl;
        } else {
            cout<< s.top() -> data << " ";
        }
        s.pop();
    }
}

void preOrderTraversal(node* root) {
    if(root == NULL) {
        return;
    }

    cout<< root -> data << " ";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
}

void inOrderTraversal(node* root) {
    if(root == NULL) {
        return;
    }

    inOrderTraversal(root -> left);
    cout<< root -> data << " ";
    inOrderTraversal(root -> right);
}

void postOrderTraversal(node* root) {
    if(root == NULL) {
        return;
    }

    postOrderTraversal(root -> left);
    postOrderTraversal(root -> right);
    cout<< root -> data << " ";
}

void inOrderTraversalIterative(node* root) {
    stack<node*> s;
    node* temp = root;

    while(temp != NULL || !s.empty()) {
        while(temp != NULL) {
            s.push(temp);
            temp = temp -> left;
        }

        temp = s.top();
        s.pop();
        cout<< temp -> data << " ";
        temp = temp -> right;
    }
}

void buildTreeUsingLevelOrderTraversal(node* &root) {
    queue<node*> q;
    cout<< "Enter root data: "<< endl;
    int data;
    cin >> data;

    root = new node(data);
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout<< "Enter left child of "<< temp -> data << endl;
        int l;
        cin >> l;
        if(l != -1) {
            temp -> left = new node(l);
            q.push(temp -> left);
        }

        cout<< "Enter right child of "<< temp -> data << endl;
        int r;
        cin >> r;
        if(r != -1) {
            temp -> right = new node(r);
            q.push(temp -> right);
        }
    }
}

int main() {
    node* root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    /*
    root = createTree(root);

    cout<< "Level Order Traversal: "<< endl;
    levelOrderTraversal(root);
    cout<< endl;

    cout<< "Reverse Level Order Traversal: "<< endl;
    reverseLevelOrderTraversal(root);
    cout<< endl;

    cout<< "Pre Order Traversal: "<< endl;
    preOrderTraversal(root);
    cout<< endl;
    cout<< "In Order Traversal: "<< endl;
    inOrderTraversal(root);
    cout<< endl;
    cout<< "Post Order Traversal: "<< endl;
    postOrderTraversal(root);
    cout<< endl;

    cout<< "In Order Traversal Iterative: "<< endl;
    inOrderTraversalIterative(root);
    */

    buildTreeUsingLevelOrderTraversal(root)

    return 0;
}