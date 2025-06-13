class Solution {
  public:
    bool predicate(int m,vector<int> &arr,int k){
        int hoursTaken = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] > m){
                hoursTaken += arr[i]/m;
            } 
            if(arr[i] <=m || arr[i]%m!=0 ) hoursTaken++;
            
        }
        //cout<<"M: "<<m<<" hours: "<<hoursTaken<<endl;
        return hoursTaken<=k;
    }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int l = 1;
        int h = 0;
        int ans = 0;
        for(auto i:arr){
            h = max(h,i);
        }
        while(l<=h){
            int m = (l+h)/2;
            if(predicate(m,arr,k)){
                h = m-1;
                ans = m;
            }
            else{
                l = m+1;
            }
        }
        return ans;
    }
};