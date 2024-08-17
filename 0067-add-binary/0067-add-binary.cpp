class Solution {
public:
    string addBinary(string a, string b) {
        int len_a = a.length();
        int len_b = b.length();
        int it_a = len_a - 1;
        int it_b = len_b - 1;
        string result = "";
        int carry = 0;

        while (it_a >= 0 || it_b >= 0 || carry) {
            int sum = carry;
            if (it_a >= 0) sum += a[it_a] - '0'; 
            if (it_b >= 0) sum += b[it_b] - '0';
            
            carry = sum / 2;
            result += to_string(sum % 2);

            it_a--;
            it_b--;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
