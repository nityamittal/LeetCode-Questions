class Solution {
public:
    string reorganizeString(string s) 
    {
        string res = "";
        unordered_map<char,int> m;

        //O(n)
        for(auto ch:s)
        {
            m[ch]++;
        }
        auto cmp = [](const pair<char,int>&a, const pair<char,int>&b){
            return a.second<b.second;
        };

        
        priority_queue<pair<char,int>, vector<pair<char,int>>, decltype(cmp)>maxHeap(cmp);
        //O(nlogn)
        for(auto &n:m)
        {
            maxHeap.push(make_pair(n.first,n.second));
        }

        pair<char,int> prev = {'#',0};

        while(!maxHeap.empty())
        {
            auto temp  = maxHeap.top();
            maxHeap.pop();
            
            res+=temp.first;

            if(prev.second>0)
            {
                maxHeap.push(prev);                
            }
            --temp.second;
            prev = temp;
        }

        if(res.size()==s.size())
        return res;
        else
        return "";
        
    }
};