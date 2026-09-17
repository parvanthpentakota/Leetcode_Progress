class Solution {
public:
    string decodeMessage(string key, string message) {
         char mapping[26];
        bool used[26] = {false};

        char current = 'a';

        for(int i = 0; i < key.length(); i++){
            if(key[i] == ' '){
                continue;
            }

            int index = key[i] - 'a';

            if(!used[index]){
                mapping[index] = current;
                used[index] = true;
                current++;
            }
        }

        for(int i = 0; i < message.length(); i++){
            if(message[i] != ' '){
                message[i] = mapping[message[i] - 'a'];
            }
        }

        return message;
    }
};