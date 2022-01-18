class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        int start = 0, n = arr.size();
        int end = n-1;
        
        while((start+1<n) and arr[start]<arr[start+1])
            ++start;
        
        while(end>0 and arr[end-1]>arr[end])
            --end;
        
        return start>0 and start==end and end<n-1;
        
            
    }
};