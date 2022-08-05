class Solution {
public:
int lengthOfLongestSubstring(string s) {
vector diction(256,-1);
int maxi=0;int st=-1;
for(int i=0;i<s.size();i++){
if(diction[s[i]]>st)
st=diction[s[i]];
diction[s[i]]=i;
maxi=max(maxi,i-st);
}
return maxi;
}
};