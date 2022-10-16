class Solution {
public:
    void sortColors(vector<int>& a)
    {
        int p = 1;
        int l = 0, r = a.size() - 1;
        for(int i = 0; i <= r; i++) 
        {
            if(a[i] < p) 
            {
                swap(a[i], a[l]);
                l++;
            } else if(a[i] > p) 
            {
                swap(a[i], a[r]);
                r--;
                i--;
            }
        }
    }
};

//using modified quicksort, setting pivot element as 1 than element greater than pivot 
//on the right side and element smaller than pivot of left side.and element equal to it in middle.