METHOD 1
  compare ar1 element with ar2[0] if found smaller swap and sort second array
int main()
{
    fast;
    int arr1[] = {7,1,5,2,3,6};
    int arr2[] = {3,8,6,20,7};
    int n1=6,n2=5;
    sort(arr1,arr1+n1);         //IF NOT SORTED SORT
    sort(arr2,arr2+n2);         //IF NOT SORTED SORT
    for(int i=0;i<n1;i++){
        if(arr1[i]>arr2[0]){
            swap(arr1[i],arr2[0]);
            for(int k=1;k<n2;k++){
                if(arr2[k-1]>arr2[k])
                swap(arr2[k-1],arr2[k]);
                else break;
            }
        }
    }
    for(int i=0;i<n1;i++) cout<<arr1[i]<<" ";
    cout<<endl;
    for(int i=0;i<n2;i++) cout<<arr2[i]<<" ";
    return 0;
}

METHOD 2 (two pointers)
  assign i to end of first array and j to start of second array.
  compare both array value and if ar1[i]<ar2[j] swap both.
int main()
{
    fast;
    int arr1[] = {7, 1, 5, 2, 3, 6};
    int arr2[] = {3, 8, 6, 20, 7};
    int n1=6,n2=5;
    sort(arr1,arr1+n1);         //IF NOT SORTED SORT
    sort(arr2,arr2+n2);         //IF NOT SORTED SORT
    int i=n1-1,j=0;
    for(;i>=0 && j<n2;){
        if(arr1[i]>arr2[j]){
            swap(arr1[i],arr2[j]);
            i--;
            j++;
        }
        else 
        break;
    }
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    for(int i=0;i<n1;i++) cout<<arr1[i]<<" ";
    cout<<endl;
    for(int i=0;i<n2;i++) cout<<arr2[i]<<" ";
    return 0;
}
