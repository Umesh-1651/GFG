class Solution {
  public:
    int pred(int m,vector<int> &arr,int k){
        int val = 0;
        //cout<<m<<endl;
        for(auto i:arr){
            val += ceil((double)i/m);
            //cout<<val<<" ";
        }
       // cout<<endl;
        return val<=k;
    }
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int l=1;
        int h = *max_element(arr.begin(),arr.end());
        int ans = INT_MAX;
        while(l<=h){
            int m = (l+h)/2;
            if(pred(m,arr,k)){
                ans = m;
                h= m-1;
            }
            else l=m+1;
        }
        return ans;
    }
};
