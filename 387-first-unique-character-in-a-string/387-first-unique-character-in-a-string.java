class Solution {
    public int firstUniqChar(String s) {
        if(s.length() == 0){
            return -1;
        }
        Map<Character, Integer> res = new HashMap<>();
        for(char ch : s.toCharArray()){
            res.put(ch, res.getOrDefault(ch, 0) + 1);
        }
        for(char ch: s.toCharArray()){
            if(res.get(ch) == 1){
                return s.indexOf(ch);
            }
        }
        
        return -1;
    }
}