METHOD 1 (recursion)
int height(struct Node* node){
  if(node==NULL)
  return 0;
  return max(height(node->left),height(node->right))+1;
}
