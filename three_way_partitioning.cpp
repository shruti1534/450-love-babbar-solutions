METHOD 1 (sorting)
METHOD 2
int n=arr.size();
int s=0,g=n-1;
for(int i=0;i<=g;){
if(arr[i]<a){
swap(arr[s],arr[i]);
s++;
i++;
}
else if(arr[i]>b){
swap(arr[g],arr[i]);
g--;
}
else
i++;
}
