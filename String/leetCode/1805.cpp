class Solution {
private:
    string removeLeadingZeros( string& str) {
    // Find the position of the first non-zero digit.
    size_t firstNonZero = str.find_first_not_of('0');

    // If no non-zero digit was found, return "0".
    if (firstNonZero == string::npos) {
        return "0";
    }

    // Otherwise, return the substring starting from the first non-zero digit.
    return str.substr(firstNonZero);
}
public:
    int numDifferentIntegers(string word) {
        string temp = "";
        set<string>ans;
        for(int i=0;i<word.size();i++){
            char ch = word[i];
              // check -> string is digit
            if(isdigit(ch)){
                temp = temp + ch;
            }
              // -> temp value insert into set 
            else if(!temp.empty()){
                ans.insert(removeLeadingZeros(temp));
                temp.clear();
            }
        }
      // if string contain digit is last position than temp not be stored in ans
      // for last temp value
        if(!temp.empty()){
            ans.insert(removeLeadingZeros(temp));
        }
        return ans.size();
    }
};
