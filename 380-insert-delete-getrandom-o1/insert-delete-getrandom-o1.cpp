class RandomizedSet {
public:
    unordered_set<int> s;
    RandomizedSet() 
    {
        s.reserve(1);
    }
    
    bool insert(int val) 
    {
        if(s.count(val)==0)
        {
            s.insert(val);
            return true;
        }     
        return false;
    }
    
    bool remove(int val) 
    {
        if(s.count(val)!=0)
        {
            s.erase(val);
            return true;
        }     
        return false;
    }
    
    int getRandom() 
    {
        vector<int> v(s.begin(), s.end());
        return v[rand()%v.size()];
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */