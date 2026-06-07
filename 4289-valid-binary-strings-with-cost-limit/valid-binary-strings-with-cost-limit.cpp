class Solution {
    vector<string> ans;

    bool f2(string& s, int k) {
        int sum = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1') {
                sum += i;
                if(sum > k) return false;
            }
        }

        return true;
    }

    void f(int n, string& s, int l, int k) {

        if(l == n) {
            if(f2(s, k))
                ans.push_back(s);
            return;
        }

        if(s.empty() || s.back() != '1') {

            s.push_back('0');
            f(n, s, l + 1, k);
            s.pop_back();

            s.push_back('1');
            f(n, s, l + 1, k);
            s.pop_back();
        }
        else {

            s.push_back('0');
            f(n, s, l + 1, k);
            s.pop_back();
        }
    }

public:
    vector<string> generateValidStrings(int n, int k) {
        string s = "";
        f(n, s, 0, k);
        return ans;
    }
};