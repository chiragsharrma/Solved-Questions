class Solution {
public:
    string solve(string s){
    int n = s.size();
    int i = 0;
    int j = 0;
    int cnt = 0;
    string ans = "";
    while(i<n){
        j = i;
        cnt = 1;
        while(i<n and s[i]==s[i+1]){
            i++;
            cnt++;
        }
        ans += (cnt+'0');
        ans += s[j];    
        i++;
    }
    return ans;
}

string countAndSay(int n) {
    string s = "1";
    n--;
    while(n--){
        s = solve(s);
    }
    return s;
}
};