METHOD 1 (Use sorting) 
METHOD 2 (use Heap)-------- O(n+klogn) n for building heap & klogn for heapifying ktimes
int main()
{
    fast;
    int ar[]={1,2,3,4,5};
    int n=5;int k=3;
    priority_queue<int, vector<int>, greater<int> >pq;
    for(int i=0;i<n;i++){
        pq.push(ar[i]);
    }
    for(int i=0;i<k-1;i++){
        pq.pop();
    }
    cout<<pq.top();
    return 0;
}
