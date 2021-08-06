METHOD 1 (recursion)
void mirrorify(node* root, node** mirror)
{
    if (root == NULL) {
        mirror = NULL;
        return;
    }
 
    // Create new mirror node from original tree node
    *mirror = createNode(root->val);
    mirrorify(root->left, &((*mirror)->right));
    mirrorify(root->right, &((*mirror)->left));
}
//calling function
Node *mirror=NULL;
mirrorify(root,&mirror);

METHOD 2 (swapping)
void mirrorTree(node* root)
{
    // Base Case
    if (root == NULL)
        return;
    node* t = root->left;
    root->left = root->right;
    root->right = t;                    
//     or 
//     swap(root->left,root->right);
    if (root->left)
        mirrorTree(root->left);
    mirrorTree(root->right);
}
