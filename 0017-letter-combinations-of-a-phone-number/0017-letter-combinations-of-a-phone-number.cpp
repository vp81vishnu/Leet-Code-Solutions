void solve(string digits, string output, int index, vector<string>& v, unordered_map<char,vector<char>>& mp)
{
    if(index >= digits.size())
    {
        v.push_back(output);
        return;
    }
    
    char digit = digits[index];
    vector<char> letters = mp.at(digit);
    
    for(char letter : letters)
    {
        output.push_back(letter);
        solve(digits, output, index + 1, v, mp);
        output.pop_back();
    }
}

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> v;
        if(digits.empty())
        {
            return v;
        }

        string output = "";
        int index = 0;

        unordered_map<char, vector<char>> mp;
        mp['2'] = {'a', 'b', 'c'};
        mp['3'] = {'d', 'e', 'f'};
        mp['4'] = {'g', 'h', 'i'};
        mp['5'] = {'j', 'k', 'l'};
        mp['6'] = {'m', 'n', 'o'};
        mp['7'] = {'p', 'q', 'r', 's'};
        mp['8'] = {'t', 'u', 'v'};
        mp['9'] = {'w', 'x', 'y', 'z'};

        solve(digits, output, index, v, mp);

        return v;
    }
};