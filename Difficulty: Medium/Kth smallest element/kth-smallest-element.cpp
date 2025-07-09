class Solution {
  public:
    int kthSmallest(vector<int>& arr, int k) {
        // code here
        priority_queue<int> minHeap;
        
        for(auto i:arr){
            if(minHeap.size()<k) minHeap.push(i);
            else if( minHeap.top() > i){
                minHeap.pop();
                minHeap.push(i);
            }
        }
        if(!minHeap.empty()) return minHeap.top();
        return -1;
    }
};
