#include <bits/stdc++.h>
/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};
	
***********************************************************/
#include<climits>
#include<cmath>
class Pair{
    
   public:
  int minimum;
  int maximum;
  bool bst;
   int height;
};

Pair BST(BinaryTreeNode<int> *root)
{
    if(root==NULL)
    {
       Pair obj;
        obj.minimum =INT_MAX;
        obj.maximum = INT_MIN;
        obj.bst = true;
        obj.height=0;
    return obj;
    }
    
    Pair left= BST(root->left);
    Pair right =BST(root->right);
    
    int minimum=min(root->data,min(left.minimum,right.minimum));
    int maximum=max(root->data,max(left.maximum,right.maximum));
    bool  isBSTfinal=(root->data >left.maximum) && (root->data < right.minimum) && left.bst && right.bst;
   
    Pair obj;
    obj.minimum=minimum;
    obj.maximum=maximum;
    obj.bst=isBSTfinal;
    if(isBSTfinal)
    {
        obj.height= 1+max(left.height,right.height);
    }
    else   obj.height= max(left.height,right.height);
    return obj;
    
}

int largestBSTSubtree(BinaryTreeNode<int> *root) {
    // Write your code here
    return BST(root).height;
    }
