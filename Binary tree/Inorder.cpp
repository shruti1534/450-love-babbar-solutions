METHOD 1 (iterative)
void inorder(Node *root){
  stack<Node*>st;
  Node *curr=root;
  while(!st.empty() || curr!=NULL){
    if(curr!=NULL){
      st.push(curr);
      curr=curr->left;
    }
    else{
      curr=st.top();
      st.pop();
      cout<<curr->data;
      curr=curr->right;
    }
  }
}


METHOD 2 (recursive)
void inorder(Node *root){
  if(root==NULL)
    return;
  inorder(root->left);
  cout<<root->data;
  inorder(root->right);
}
