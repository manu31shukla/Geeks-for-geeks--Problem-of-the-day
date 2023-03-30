class Solution {
  public:
    long long int minimumInteger(int N, vector<int> &A) {long long int sum=0;
        for (long long int i = 0; i < N ; i++ ){
            sum+=A[i];
        }
        sort(A.begin(), A.end());
        for (long long int i = 0; i < N ; i++ ){
            if (sum<=(long long int)N * A[i]){
                return (int)A[i];
            }
        }
    }
};