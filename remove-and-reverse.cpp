//User function Template for C++
class Solution {
  public:
    string removeReverse(string s) {
        
    int start=0,end=s.length()-1;
        int p[26]={0};
    
        for(int i=0;i<s.length();i++){
            char ch= s[i];
            p[ch-'a']++;
        }
        int f=0;
        while(start<=end){
            if(f==0){
                if (p[s[start]-'a']==1){
                    start++;
                }
                else{
                    (p[s[start]-'a'])--;
                    s[start]='#';
                    start++;
                    f=1;
                }
            }else{
                if (p[s[end]-'a']==1){
                    end--;
                }else{
                    (p[s[end]-'a'])--;
                    s[end]='#';
                    f=0;
                    end--;
                }
            }
        }if (f==1){
            reverse(s.begin(), s.end());
        }
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='#'){
                ans+=s[i];
            }
        }
        return ans;
    
    
    }
};