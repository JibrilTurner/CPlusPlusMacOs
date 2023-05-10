#include <iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node * right; 
};

node* createNode(int data){ 
    node* newNode = new node();
    newNode -> data = data;
    newNode -> left = newNode->right = nullptr;
    return newNode;
};

int main(){
    node* root = createNode(1);
    cin.get();
    root -> left = createNode(1);
    root -> left = createNode(2);
    root -> right = createNode(3);
    root -> left -> left = createNode(3);
    

}