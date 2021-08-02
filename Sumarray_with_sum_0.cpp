METHOD (hashing)
  in prefix array if found same value again or value equals to zero then yes
int main()
{
    fast;
    int n=2;
    int arr[] = {10,-10};
    // arr[] = {1,3,-1,-2,4};
    set<int>s;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0 || s.find(sum)!=s.end())
        cout<<1;
        s.insert(sum);
    }
    cout<<0;
    return 0;
}
