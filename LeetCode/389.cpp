    char findTheDifference(string s, string t) {
        return static<char>(accumulate(s.begin(), s.end(), 0) - accumulate(t.begin(), t.end(), 0));
    }