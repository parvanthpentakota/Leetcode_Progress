class Solution {
public:
    bool digitCount(string num) {
             int frequency[10] = {0};

        for(int i = 0; i < num.length(); i++){
            int digit = num[i] - '0';
            frequency[digit]++;
        }

        for(int i = 0; i < num.length(); i++){
            int expected = num[i] - '0';

            if(frequency[i] != expected){
                return false;
            }
        }

        return true;  
    }
};