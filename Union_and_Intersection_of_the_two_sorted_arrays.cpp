UNION
METHOD 1 (use set)
METHOD 2 (use hash map)
METHOD 3
int main()
{
    fast;
    int arr1[] = {7, 1, 5, 2, 3, 6};
    int arr2[] = {3, 8, 6, 20, 7};
    int n1=6,n2=5;
    sort(arr1,arr1+n1);         //IF NOT SORTED SORT
    sort(arr2,arr2+n2);         //IF NOT SORTED SORT
    int i=0,j=0;
    vector<int>ar;
    for(;i<n1 && j<n2;){
        if(arr1[i]<arr2[j]){
            ar.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            ar.push_back(arr2[j]);
            j++;
        }
        else{
            ar.push_back(arr1[i]);
            i++;j++;
        }
    }
    while(i<n1){
        ar.push_back(arr1[i]);
        i++;
    }
    while(j<n2){
        ar.push_back(arr2[j]);
        j++;
    }
    for(int i=0;i<ar.size();i++) cout<<ar[i]<<" ";
    return 0;
}

INTERSECTION
METHOD 1 (use has map)
METHOD 2
int main()
{
    fast;
    int arr1[] = {7, 1, 5, 2, 3, 6};
    int arr2[] = {3, 8, 6, 20, 7};
    int n1=6,n2=5;
    sort(arr1,arr1+n1);         //IF NOT SORTED SORT
    sort(arr2,arr2+n2);         //IF NOT SORTED SORT
    int i=0,j=0;
    vector<int>ar;
    for(;i<n1 && j<n2;){
        if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
        else{
            ar.push_back(arr1[i]);
            i++;j++;
        }
    }
    for(int i=0;i<ar.size();i++) cout<<ar[i]<<" ";
    return 0;
}
