class Solution {
public:
    bool isAnagram(string s, string t) {
        // String #1: "racecar"
        // String #2: "carrace"

        // Sort character using Sort() cpp provided function

        // Sort() function sorts strings smallest to largest
        // Example: 
        // Input #1: racecar becomes: aaccerr
        // Input #2: carrace becomes: aaccerr

        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        if (s == t) {
            return true;
        }
        return false;
    }
};
