METHOD 1 (sorting and finding if two value find same)
METHOD 2 (use hashing ,map)
METHOD 3 (binary search) 
METHOD 4 (use set)
  if set.find(<repeated value>)!=set.end()
    return that value
    
METHOD 5 (use XOR)
int main()
{
    fast;
    int ar[]={2,1,3,4,2};
    int n=5;
    int x1=ar[0],x2=1;
    for(int i=1;i<n;i++){
        x1^=ar[i];
    }
    for(int i=2;i<n;i++){
        x2^=i;
    }
    int val=x1^x2;
    cout<<val;
    return 0;
}

METHOD 6
int main()
{
    fast;
    int ar[]={1,1};
    int n=2;
    sort(ar,ar+n);
    int k=1;
    for(int i=0;i<n;i++){
        if(ar[i]!=k){
            cout<<ar[i];
            break;
        }
        else
        k++;
    }
    return 0;
}
    
