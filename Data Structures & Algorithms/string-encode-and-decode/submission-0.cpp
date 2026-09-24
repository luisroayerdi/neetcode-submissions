class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for (auto v : strs) {
            encoded.append(to_string(v.size()));
            encoded.append("#");
            encoded.append(v);
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        while (i < s.size()) {
            string n;
            while (s[i] != '#') {
                n.push_back(s[i]);
                i++;
            }
            int num = stoi(n);
            decoded.push_back(s.substr(i + 1, num));
            i += num + 1;
        }
        return decoded;
    }
};
