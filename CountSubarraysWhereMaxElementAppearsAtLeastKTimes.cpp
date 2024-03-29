class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long result = 0;
        int maxElem = *max_element(nums.begin(), nums.end());
        int cnt = 0;
        for(int left = 0, right = 0; right < nums.size(); right++){
            cnt += (nums[right] == maxElem);
            while(cnt >= k) cnt -= (nums[left++] == maxElem);
            result += left;
            cout << result << ' ';
        }
        return result;
    }
};
