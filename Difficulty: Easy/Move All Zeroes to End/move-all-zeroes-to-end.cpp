// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        stable_partition(arr.begin(), arr.end(), [](int n) { 
                                       return n != 0; });
    }
};