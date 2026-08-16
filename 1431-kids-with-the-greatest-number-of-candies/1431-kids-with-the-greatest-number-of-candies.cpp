class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum = candies[0];

        for (int i = 1; i < candies.size(); i++) {
            if (candies[i] > maximum) {
                maximum = candies[i];
            }
        }

        vector<bool> result;

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maximum) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }

        return result;
    }
};