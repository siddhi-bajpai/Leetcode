#include <vector>
using namespace std;

class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<long long> vec(n, 1);
        int MOD = 1000000007;
        
        for (int i = 0; i < k; i++) {
            vector<long long> new_vec(n, 0);
            new_vec[0] = vec[0];
            for (int j = 1; j < n; j++) {
                new_vec[j] = (new_vec[j - 1] + vec[j]) % MOD;
            }
            vec = new_vec;
        }
        return vec[n - 1];
    }
};
