METHOD 1 (hash map)
  int n=nums.size();
  vector<int>ans;
  map<int,int>mp;
  for(int i=0;i<n;i++){
      mp[nums[i]]++;
  }
  for(auto it:mp){
      if(it.second>n/3)
          ans.push_back(it.first);
  }
  return ans;

METHOD 2 (voting-moores algorithm)
int main()
{
    fast;
    int n=7;
    int arr[] = {1,3,3,2,2,2,3};
    int c1=0,c2=0,ele1=-1,ele2=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==ele1)
        c1++;
        else if(arr[i]==ele2)
        c2++;
        else if(c1==0){
            c1=1;
            ele1=arr[i];
        }
        else if(c2==0){
            c2=1;
            ele2=arr[i];
        }
        else{
            c1--;
            c2--;
        }
    }
    c1=0;c2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele1)
        c1++;
        else if(arr[i]==ele2)
        c2++;
    }
    if(c1>n/3)
    cout<<ele1<<" ";
    if(c2>n/3)
    cout<<ele2;
    return 0;
}

  //Moore's law
  int maj_index = 0, count = 1;
  for (int i = 1; i < size; i++) {
      if (a[maj_index] == a[i])
          count++;
      else
          count--;
      if (count == 0) {
          maj_index = i;
          count = 1;
      }
  }
  return a[maj_index];
