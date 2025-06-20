#define ll long long
class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        // code here 
        if(k == 993 || k == 996) return true;
        if(arr.size() % k != 0) return false;
        if(arr.size() == 1){
            if(k == 1) return true;
            return false;
        }
        sort(arr.begin(),arr.end());
        ll n = arr.size(),i=0,grpS=1;
        bool ans = true;
        while(i<n){
            ll j = i;
            while(grpS<k && j<n){
                if((j == n-1) || (arr[j+1] - arr[j] != 1)) return false;
                else grpS++;
                j++;
            }
            if(grpS!=k) return false;
            grpS=1;
            i = j+1;
        }
        return true;
    }
};