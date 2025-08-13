class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans;
        for (int j =0; j<n; j++)
        arr[j] = arr[j]-1;

    // Use every element arr[i] as index and add 'n' to
    // element present at arr[i]%n to keep track of count of
    // occurrences of arr[i]
    for (int i=0; i<n; i++)
        arr[arr[i]%n] = arr[arr[i]%n] + n;

    // To print counts, simply print the number of times n
    // was added at index corresponding to every element
    for (int i =0; i<n; i++){
        ans.push_back(arr[i]/n);
    }
    return ans;
    }
};
