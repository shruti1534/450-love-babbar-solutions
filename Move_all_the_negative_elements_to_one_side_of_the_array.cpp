METHOD 1 (Sorting)  if order not imp
METHOD 2 (two pointer method) if order not imp
int main()
{
    fast;
    int ar[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(ar)/ sizeof(ar[0]);
    int l=0,h=n-1;
    while(l<h){
        if(ar[l]<0)
        l++;
        else{
            swap(ar[l],ar[h]);
            h--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
