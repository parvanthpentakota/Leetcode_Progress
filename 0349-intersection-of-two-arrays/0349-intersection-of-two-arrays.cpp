class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         vector<int> answer;

        for (int i = 0; i < nums1.size(); i++) {
            bool found = false;

            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    found = true;
                    break;
                }
            }

            if (found) {
                bool alreadyAdded = false;

                for (int j = 0; j < answer.size(); j++) {
                    if (answer[j] == nums1[i]) {
                        alreadyAdded = true;
                        break;
                    }
                }

                if (!alreadyAdded) {
                    answer.push_back(nums1[i]);
                }
            }
        }

        return answer; 
    }
};