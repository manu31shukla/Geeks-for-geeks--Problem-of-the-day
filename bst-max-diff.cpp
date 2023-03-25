//User function Template for C++
//User function Template for C++

class Solution{
public:
    Node* search(Node* root, int target, int &x)
    {
        if(root==NULL)return NULL;
        
        
        x+=root->data;
        if(root->data==target)
        {
            return root;
        }
        if(target>root->data)
        {
            return search(root->right,target, x);
        }
        else
        {
            return search(root->left,target,x);
        }
    }
    
    int leafNodes(Node* root)
    {
        if(root->left==NULL and root->right==NULL)
        {
            return root->data;
        }
        int mini=INT_MAX;
        if(root->left)
        {
            mini=min(mini,leafNodes(root->left));
        }
        if(root->right)
        {
            mini=min(mini,leafNodes(root->right));
        }
        
        return mini+root->data;
    }
    
    int maxDifferenceBST(Node *root,int target){
        // Code here
        int x=0;
        Node* targetNode=search(root, target,x);
        if(targetNode==NULL)return -1;
        
        int y=leafNodes(targetNode);
        
        return x-y;
        
    }
};