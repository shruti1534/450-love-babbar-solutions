METHOD 1 (two loops)
METHOD 2 (use sorting+window sliding)
int main()
{
    fast;
    int n=6,m=3;
    int arr[] = {1,4,45,6,10,8};
    sort(arr,arr+n);
    int d=INT_MAX;
    for(int i=0;i+m-1<n;i++){
        int j=i+m-1;
        d=min(d,arr[j]-arr[i]);
    }
    cout<<d;
    return 0;
}
