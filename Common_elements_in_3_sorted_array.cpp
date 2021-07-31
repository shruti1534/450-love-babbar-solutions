METHOD 1 (intersection)       //O(length1+ length2+ length3)
  store intersection of first two array in temporary array.
  again intersection of third array with temporary array.
  
METHOD 2
int main()
{
    fast;
    int n1=6,n2=5,n3=8; 
    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int i=0,j=0,k=0;
    while(i<n1 && j<n2 && k<n3){
        if(A[i]==B[j] && B[j]==C[k]){
            cout<<A[i]<<" ";
            i++;j++;k++;
        }
        else if(A[i]<B[j])
        i++;
        else if(B[j]<C[k])
        j++;
        else 
        k++;
    }
    return 0;
}
