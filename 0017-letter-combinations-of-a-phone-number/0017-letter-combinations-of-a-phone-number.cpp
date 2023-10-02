class Solution {
public:
    void help(string digits, string output, int j, string mapping[], vector<string> &ans){
    // base case
        if(j >= digits.size()){
            ans.push_back(output);
            return;
        }

        int number = digits[j] - '0';    // integer
        string value = mapping[number];      // alphabets on that number

        for(int i=0; i<value.size(); i++){
            output.push_back(value[i]);
            help(digits, output, j+1, mapping, ans);
            output.pop_back();              // remove on backtracking
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if  (digits.size() == 0) return ans;
        string output;
       // int index = 0;
        string mapping[] = {"","", "abc",  "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        help(digits,output,0, mapping,ans);
        return ans;
    }
};

//   void help(string digits, string output, int i, string mapping[], vector<string> &ans){
     
//     if(i >= digits.size())
//     {
//         ans.push_back(output);
//         return;
//     }
//         int number = digits[i] - '0';
//         string value = mapping[number];
//         for (int i = 0; i<value.size(); i++){
//            output.push_back(value[i]);
//            help(digits,output,i+1,mapping, ans);
//            output.pop_back();
//         }
//     }