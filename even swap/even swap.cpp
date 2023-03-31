
class Solution
{
    public:
     vector <int> lexicographicallyLargest(vector <int> &a,int n)
     { int x=0;
            
            while(x<n)
            {   int y=x+1;
                while(y<n && a[y]%2==a[y-1]%2)
                {
                   y++;
                }
                
                sort(a.begin()+x, a.begin()+y, greater<int>());
                x=y;
            }
            return a;
     }
};