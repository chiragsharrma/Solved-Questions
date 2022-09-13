class Solution {
   public int longestValidParentheses(String s) {
        if(s.length() == 0){
            return 0;
        }
        Stack<Integer> t = new Stack<>();
        for(int i=0; i<s.length(); i++){
            char c = s.charAt(i);
            
            if(!t.isEmpty() && c==')' && s.charAt(t.peek())=='('){
                t.pop();
            }
            else{
                t.push(i);
            }
        }
        
        int maxL = 0;
        int flag = -1;
        for(int i: t){
            maxL = Math.max(maxL, i-flag-1);
            flag = i;
        }
        maxL = Math.max(maxL, s.length()-flag-1);
        
        return maxL;
    }
}