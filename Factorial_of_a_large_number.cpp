use array
int main(){
  int n=5;
    vector<int>ans;
    ans.push_back(1);
    int carry=0;
    for(int i=2;i<=n;i++){
        int val,k;
        for(k=0;k<ans.size();k++){
            val=carry+i*ans[k];
            ans[k]=val%10;
            carry=val/10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
    }
    for(int i=ans.size()-1;i>=0;i--) cout<<ans[i];
    return 0;
}
