class Solution {
public:
    int splitArray(vector<int>& a, int k) {
        int l = *max_element(a.begin(), a.end()), r = accumulate(a.begin(), a.end(), 0);
        while (l < r) {
            int m = (l + r) / 2, s = 0, c = 1;
            for (int x : a) {
                if (s + x > m) c++, s = 0;
                s += x;
            }
            if (c <= k) r = m;
            else l = m + 1;
        }
        return l;
    }
};