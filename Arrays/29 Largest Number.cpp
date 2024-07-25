class Solution {
public:
    static bool compare(const string &a, const string &b) {
        return a + b > b + a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> strNums;
        
        // Convert all integers to strings
        for (int num : nums) {
            strNums.push_back(to_string(num));
        }
        
        // Sort using custom comparator
        sort(strNums.begin(), strNums.end(), compare);
        
        // Join sorted strings
        string result;
        for (const string &str : strNums) {
            result += str;
        }
        
        // Handle the case where the result is something like "0000..."
        if (result[0] == '0') {
            return "0";
        }
        
        return result;
    }
};
