
// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int> pq;
        for(auto i:arr){
            if(pq.size()<k) pq.push(i);
            else if(pq.top() > i){
                pq.pop();
                pq.push(i);
            }
        }
        return pq.top();
    }
};

