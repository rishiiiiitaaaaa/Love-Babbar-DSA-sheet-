Approach 1:
class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>ans;
        int sl=0;
        int e=s.size()-1;

        while(sl<e)
        {
            swap(s[sl++],s[e--]);
        }
    }
};
Approach 2:

class Solution {
public:
    void reverseString(vector<char>& s) {
 reverse(s.begin(),s.end());
    }
};