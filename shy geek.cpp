class Solution{ 
 public:
    Shop shop;
    Solution(Shop s)
    {
        this->shop = s;
    }
    long long find(int n, long k){
        long long sol=0,left=0,right=n-1;
        while(right>=0 and k>0)
        {
            left=0;
            long long x=-1;
            long long y;
            while(left<=right)
            {
                long long mid=(left+right)/2, mid_price=shop.get(mid);
                if(mid_price<=k)
                {
                    x=mid;
                    y=mid_price;
                    left=mid+1;
                }
                else
                {
                    right=mid-1;
                }
            }
            
            sol+=(k/y);
            k=k%(y);
            right=x-1;
            
        }
        
        return sol;
    }
};