class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int current=0;
        int max_num=0;
                
        for(int i=0;i<gain.size();++i)
        {
            current+=gain[i];
            max_num = max(current,max_num);
            
        }
        return max_num;
        
    }
};
