class Solution
{
    public:
    int countSubstring(string s)
    {   int n = s.size();
        int cnt = 0, ans = 0;
       unordered_map<int, int> m;
       m[0] = 1;
       for(int i=0; i<n; i++)
       {
        if(isupper(s[i])) cnt++;
        else cnt--;
        if(m.find(cnt) != m.end())
        {
            ans += m[cnt];
            m[cnt]++;
        }
        else m[cnt] = 1;
    }
     return ans;
    }
};