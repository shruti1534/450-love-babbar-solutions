METHOD 1 (Sorting)
METHOD 2 (Count no. of 0,1,2 and arrange them back)
METHOD 3 (three pointer method)
int main()
{
    fast;
    int ar[]={0,1,2,1,1,0,0,2};
    int n=8;
    int l=0,m=0,h=n-1;
    while(m<=h){
        if(ar[m]==0){
            swap(ar[l],ar[m]);
            l++;m++;
        }
        else if(ar[m]==1)
            m++;
        else if(ar[m]==2){
            swap(ar[m],ar[h]);
            h--;
        }
    }
    for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";
    return 0;
}
