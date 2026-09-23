class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;

        int carry = 0;
        string answer;

        while(i >= 0 || j >= 0 || carry > 0){
            int sum = carry;

            if(i >= 0){
                sum += a[i] - '0';
                i--;
            }

            if(j >= 0){
                sum += b[j] - '0';
                j--;
            }

            answer += char('0' + (sum % 2));
            carry = sum / 2;
        }

        reverse(answer.begin(), answer.end());

        return answer;
    }
};