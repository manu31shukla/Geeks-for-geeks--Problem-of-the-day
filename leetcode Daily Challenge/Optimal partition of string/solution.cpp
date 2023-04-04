class Solution {
public:
    int partitionString(string s) {int cnt=0,n=s.length()-1;
                                   string str="";
    for (int i=0;i<=n;i++){
        size_t found = str.find(s[i]);
         if (found != string::npos)
        {
          
            str.clear();
            str=s[i]; 
            cnt++;
            
        }else {
            str=str+s[i];
        }
    }return cnt+1;
    }
};