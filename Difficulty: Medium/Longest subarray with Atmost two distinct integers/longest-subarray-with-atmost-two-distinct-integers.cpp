class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int maxi = INT_MIN;
        int i=0,j=0;
        map<int,int> mp;
        while(j<arr.size()){
            mp[arr[j]]++;
            while(mp.size()>2 ){
                mp[arr[i]]--;
               
                if(mp[arr[i]] == 0) mp.erase(arr[i]);
                 i++;
            }
            maxi = max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};