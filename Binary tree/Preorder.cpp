METHOD 1 (iterative)
void preorder(Node *root){
  stack<Node*>st;
  Node *curr=root;
  while(!st.empty() || curr!=NULL){
    if(curr!=NULL){
      st.push(curr);
      cout<<curr->data;
      curr=curr->left;
    }
    else{
      curr=st.top();
      curr=curr->right;
      st.pop();
    }
  }
}
//OR
 
METHOD 2 (recursive)
void preorder(Node *root){
  if(root==NULL)
    return;
  cout<<root->data;
  preorder(root->left);
  preorder(root->right);
}
