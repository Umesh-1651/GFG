class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int votes = arr.size();

    sort(arr.begin(), arr.end());

    vector<int> res;
    int count = 1;        
    int ele = arr[0];      

    for (int i = 1; i < votes; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
        } else {
            if (count > votes / 3) {
                res.push_back(ele);
            }
            ele = arr[i];
            count = 1;
        }
    }

    if (count > votes / 3) {
        res.push_back(ele);
    }

    return res;
    }
};