class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> mat(n, vector<int> (n, 0));
        
        int k = 1;
        
        int top = 0;
        
        int bottom = n - 1;
        
        int left = 0;
        
        int right = n - 1;
        
        while(left <= right && top <= bottom)
        {
            if(top <= bottom)
            {
                for(int i = left; i <= right; i++)
                {
                    mat[top][i] = k;
                    
                    k++;
                }
                
                top++;
            }
            
            if(left <= right)
            {
                for(int i = top; i <= bottom; i++)
                {
                    mat[i][right] = k;
                    
                    k++;
                }
                
                right--;
            }
            
            if(top <= bottom)
            {
                for(int i = right; i >= left; i--)
                {
                    mat[bottom][i] = k;
                    
                    k++;
                }
                
                bottom--;
            }
            
            if(left <= right)
            {
                for(int i = bottom; i >= top; i--)
                {
                    mat[i][left] = k;
                    
                    k++;
                }
                
                left++;
            }
        }
        
        return mat;
    }
};