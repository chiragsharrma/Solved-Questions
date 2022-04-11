class Solution {
  
    
    
public:
    int romanToInt(string s) {
        int n=s.size();
        map<char,int> mp;
        mp['I']=1;mp['V']=5;mp['X']=10;mp['L']=50;mp['C']=100;mp['D']=500;mp['M']=1000;
        int ans=0;
        char temp=s[n-1];
        for( int i=n-1;i>=0;i--){  //We start from the back;
            if(mp[temp]<=mp[s[i]]){     //comparing with previous value coz if its less than it means smaller no is in front of big
                ans+=mp[s[i]];             
            }
            else {
                ans-=mp[s[i]];  // for cases like IV or IX etc;
            }
            temp=s[i];
            
        }

    return ans;
    }
};