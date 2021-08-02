METHOD 1 (sorting)
if(n==1)
return 1;
sort(arr,arr+n);
vector<int>v;
v.push_back(arr[0]);
for(int i=1;i<n;i++){
   if(arr[i]!=arr[i-1])
   v.push_back(arr[i]);
}
int mx=0,c=1;
for(int i=0;i<v.size()-1;i++){
   if(v[i+1]-v[i]==1)
   c++;
   else
   c=1;
   mx=max(c,mx);
}
return mx;

METHOD 2 (set)
Create an empty hash.
Insert all array elements to hash.
Do following for every element arr[i]
Check if this element is the starting point of a subsequence. To check this, simply look for arr[i] - 1 in the hash, if not found, then this is the first element a subsequence.
If this element is the first element, then count the number of elements in the consecutive starting with this element. Iterate from arr[i] + 1 till the last element that can be found.
If the count is more than the previous longest subsequence found, then update this
if(n==1)
return 1;
set<int>s;
for(int i=0;i<n;i++){
   s.insert(arr[i]);
}
int mx=0,c=0;
for(int i=0;i<n;i++){
   if(s.find(arr[i]-1)==s.end()){
       int k=arr[i];
       c=0;
       while(s.find(k)!=s.end()){
           k+=1;
           c++;
       }
       mx=max(c,mx);
   }
}
return mx;
