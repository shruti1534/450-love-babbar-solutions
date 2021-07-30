Iterative way :
 
1) Initialize start and end indexes as start = 0, end = n-1 
2) In a loop, swap arr[start] with arr[end] and change start and end as follows : 
start = start +1, end = end – 1

int main()
{
    fast;
    int ar[]={1,2,3,4,5};
    int n=5;
    for(int i=0;i<n/2;i++){
        swap(ar[i],ar[n-1-i]);
    }
    for(int i=0;i<n;i++){
        cout<<ar[i];
    }
    return 0;
}
