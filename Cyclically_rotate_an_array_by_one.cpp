METHOD 1
  Following are steps. 
1) Store last element in a variable say x. 
2) Shift all elements one position ahead. 
3) Replace first element of array with x.
  
METHOD 2 (two pointer)
  i and j which point to first and last element of array respectively. 
  start swaping arr[i] and arr[j] and keep j fixed and i moving towards j.  
  Repeat till i is not equal to j.
int main()
{
    fast;
    int ar[] = {1,2,3,4,5};
    int n = sizeof(ar)/ sizeof(ar[0]);
    int i=0,j=n-1;
    while(i<j){
        swap(ar[i],ar[j]);
        i++;
    }
    for(int i=0;i<n;i++) cout<<ar[i]<<" ";
    return 0;
}
