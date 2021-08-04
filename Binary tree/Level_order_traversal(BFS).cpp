METHOD 1 (recursion) O(n^2)
  /*Function to print level order traversal of tree*/
  printLevelorder(tree)
  for d = 1 to height(tree)
     printCurrentLevel(tree, d);

  /*Function to print all nodes at a current level*/
  printCurrentLevel(tree, level)
  if tree is NULL then return;
  if level is 1, then
      print(tree->data);
  else if level greater than 1, then
      printCurrentLevel(tree->left, level-1);
      printCurrentLevel(tree->right, level-1);

CODE-
  vector<int> ans;
  void fun(Node *node,int k){
      if(node==NULL)
      return;
      else if(k==0)
      ans.push_back(node->data);
      else if(k>0){
          fun(node->left,k-1);
          fun(node->right,k-1);
      }
  }
  int height(Node *node){
      if(node==NULL)
      return 0;
      return max(height(node->left),height(node->right))+1;
  }
  vector<int> levelOrder(Node* node)
  {
    //Your code here
      int h=height(node);
      for(int i=0;i<h;i++){
        fun(node,i);
      }
      return ans;
  }

METHOD 2 (queue) O(n)
  vector<int> levelOrder(Node* node)
    {
    //   if(node==NULL) return;
        vector<int>ans;
        queue<Node *>q;
        q.push(node);
        while(!q.empty()){
            Node *temp=q.front();
            ans.push_back(temp->data);
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
            q.pop();
        }
        return ans;
    }
