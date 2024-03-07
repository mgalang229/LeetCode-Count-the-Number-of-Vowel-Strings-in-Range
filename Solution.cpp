class Solution {
    bool is_vowel(char letter) {
        string vowels = "aeiou";
        return vowels.find(letter) != string::npos;
    }
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt = 0;
        for (int i = left; i <= right; i++) {
            cnt += (is_vowel(words[i][0]) && is_vowel(words[i].back()));
        }
        return cnt;
    }
};
