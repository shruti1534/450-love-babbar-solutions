int c=0;
map<int,int>mp;
for(int i=0;i<n;i++){
mp[arr[i]]++;
}
for(int i=0;i<n;i++){
c+=mp[k-arr[i]];
if(k-arr[i]==arr[i])
c--;
}

return c/2;
