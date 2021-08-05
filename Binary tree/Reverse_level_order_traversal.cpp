METHOD 1 (recursion)
int height(Node *root){
    if(root==NULL)
    return 0;
    return (max(height(root->left),height(root->right))+1);
}
void fun(Node *root,int level,vector<int>&ans){
    if(root==NULL)
    return;
    else if(level==0)
    ans.push_back(root->data);
    else if(level>0){
        fun(root->left,level-1,ans);
        fun(root->right,level-1,ans);
    }
}
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    int h=height(root);
    vector<int>ans;
    for(int i=h-1;i>=0;i--)
    fun(root,i,ans);
    return ans;
}


METHOD 2 (queue)
vector<int> reverseLevelOrder(Node *root)
{
  // code here
  queue<Node *>q;
  stack<int>st;
  vector<int>ans;
  q.push(root);
  while(!q.empty()){
      Node *curr=q.front();
      st.push(curr->data);
      if(curr->right!=NULL) q.push(curr->right);
      if(curr->left!=NULL) q.push(curr->left);
      q.pop();
  }
  while(!st.empty()){
      ans.push_back(st.top());
      st.pop();
  }
  return ans;
}
