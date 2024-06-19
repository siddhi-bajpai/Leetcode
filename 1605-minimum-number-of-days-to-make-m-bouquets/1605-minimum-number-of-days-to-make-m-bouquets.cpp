class Solution {
private:
    // Helper function to determine if it is possible to make 'm' bouquets
    // with 'k' flowers each by day 'mid'.
    bool ispossible(vector<int>& bloomDay, int n, int m, int k, int mid) {
        int bouquets = 0; // Count of bouquets formed
        int count = 0;    // Count of flowers in the current bouquet

        // Iterate over each day in bloomDay
        for (int i = 0; i < n; i++) {
            // Check if the flower at bloomDay[i] can bloom by day 'mid'
            if (bloomDay[i] <= mid) {
                count++; // Add flower to the current bouquet
                // Check if the current bouquet has enough flowers
                if (count == k) {
                    count = 0; // Reset count for the next bouquet
                    bouquets++; // Increment the number of bouquets formed
                    // If required number of bouquets are formed, return true
                    if (bouquets == m) {
                        return true;
                    }
                }
            } else {
                // Reset count if the current flower cannot be used
                count = 0;
            }
        }
        // Return false if unable to form 'm' bouquets by day 'mid'
        return false;
    }

public:
    // Function to find the minimum number of days required to make 'm' bouquets with 'k' flowers each
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size(); // Number of flowers
        int start = 0; // Minimum possible day
        int end = *max_element(bloomDay.begin(), bloomDay.end()); // Maximum possible day
        int ans = -1; // Variable to store the result

        // Perform binary search between 'start' and 'end'
        while (start <= end) {
            int mid = start + (end - start) / 2; // Calculate mid-point

            // Check if it is possible to make 'm' bouquets by day 'mid'
            if (ispossible(bloomDay, n, m, k, mid)) {
                end = mid - 1; // Try to find a smaller possible day
                ans = mid;     // Update the result
            } else {
                start = mid + 1; // Increase the minimum possible day
            }
        }
        return ans; // Return the minimum possible day
    }
};