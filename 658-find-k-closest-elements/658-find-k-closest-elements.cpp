class Solution {
public:
    typedef pair<int, int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pi, vector<pi>, greater<pi>> minHeap;
        
        for(int num : arr) {
            int diff = abs(num - x);
            minHeap.push({diff, num});
        }
        
        vector<int> ans;
        while(k) {
            ans.push_back(minHeap.top().second);
            minHeap.pop();
            k--;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};