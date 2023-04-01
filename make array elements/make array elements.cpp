
class Solution {
  public:
    long long int minOperations(int n) {long long int res;
    long long int  N=(long long int)n;
    if (N%2!=0){
        res = (N/2+1)*(N/2);
    }else{
        res = (N/2)*(N/2);
    }
    return res;
    }
};