METHOD 1 (Simple Linear Search) ----- O(n) no. of comparison=2n

METHOD 2 (Compare in Pairs) 
If n is odd then initialize min and max as first element. ---------O(n) 
If n is even then initialize min and max as minimum and maximum of the first two elements respectively. 
For rest of the elements, pick them in pairs and compare their 
maximum and minimum with max and min respectively.   
  no. of comaprison-
  If n is odd:    3*(n-1)/2  
  If n is even:   1 Initial comparison for initializing min and max, 
                           and 3(n-2)/2 comparisons for rest of the elements  
                      =  1 + 3*(n-2)/2 = 3n/2 -2

int main()
{
    fast;
    int ar[]={1,2,3,4,5};
    int n=5;
    int mi,mx,i=0;
    if(n%2){
        mi=ar[0];
        mx=ar[0];
        i=1;
    }
    else{
        mi=min(ar[0],ar[1]);
        mx=max(ar[0],ar[1]);
        i=2;
    }
    for(;i<n;i+=2){
        if(ar[i]<ar[i+1]){
            mi=min(mi,ar[i]);
            mx=max(mx,ar[i+1]);
        }
        else{
            mi=min(mi,ar[i+1]);
            mx=max(mx,ar[i]);
        }
    }
    cout<<mi<<" "<<mx;
    return 0;
}
