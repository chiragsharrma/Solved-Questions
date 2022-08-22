class Solution {
    public boolean isPowerOfFour(int n) {
        
        if(n==0) return false;
        if(n==1) return true;
        
        while(n%4==0)//checking if it gets fully devided by 4 and while it gets than 
        {
            n/=4; //then subtracting every part of 4 from it.
        }
        return n==1;  
    }
}