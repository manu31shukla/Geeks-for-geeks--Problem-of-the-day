//User function Template for C++

class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int mini= 1000000000;
        for (int i=0;i<N;i++){
            int x= abs(cur-pos[i]);
            int y= x*time[i];
            mini= min(mini, y);
           
        }return mini;
    }
};