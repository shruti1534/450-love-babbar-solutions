int main()
{
    fast;
    int n=5;
    int arr[] = {6,-3,-10,0,2};
    long long ma=arr[0],mi=arr[0],prod=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<0)
        swap(mi,ma);
        ma=max((long long)arr[i],ma*arr[i]);
        mi=min((long long)arr[i],mi*arr[i]);
        prod=max(ma,prod);
    }
    cout<<prod;
    return 0;
}
