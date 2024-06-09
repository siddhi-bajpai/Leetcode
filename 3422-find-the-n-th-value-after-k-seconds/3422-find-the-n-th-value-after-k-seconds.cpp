#include <vector>
using namespace std;

class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int> vec(n, 1);
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j < n; j++) {
                vec[j] = (vec[j] + vec[j - 1]) % 1000000007;
            }
        }
        return vec[n - 1];
    }
};