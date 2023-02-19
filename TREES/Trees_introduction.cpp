/* 
A binary tree is used to store data in a heirarchial way
A binary tree is called a binary tree because a node can have only 2 nodes a right node and a left node
Properties of binary tree
1. Maximum nodes at level l = 2^l (level starts from 0)
2. Maximum nodes in a tree of height h is (2^h) -1 (height starts from 1)
3. For n nodes, minimum possible height or minimum number of levels are log2(n+1)
4. A binary tree with n leaves has at least log2(n+1)+1 number of levels
*/

#include <iostream>
using namespace std;

struct Node{
    int data;
    struct node* left;
    struct node* right;

    Node (int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    return 0;
}