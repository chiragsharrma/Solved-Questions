class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) 
    {
        int n = changed.size();
        vector<int> ans;
        vector<int> vacans;
		
         unordered_map<int, int> um;
        if (n % 2 !=0) return ans;
        sort(changed.begin(), changed.end());
	
        for(auto x: changed){
            um[x]++;
			
        }
        for (auto y: changed) {
          if (um[y] == 0) continue;
          if (um[y * 2] == 0) return vacans;
          ans.push_back(y);
          um[y]--;
          um[y * 2]--;
        }
        return ans;
    }
};