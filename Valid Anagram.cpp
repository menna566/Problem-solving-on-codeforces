class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char,int> mp;
    for(auto i:s)
    {
      mp[i]++;
    }
    for(auto x:t)
    {
        mp[x]--;
    }
      for(auto i:mp)
      {
          if(i.second!=0)
          {
              return false ;
          }
      }
        return true ;
    }
};
