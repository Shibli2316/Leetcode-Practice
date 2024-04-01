class Solution {
public:
    int lengthOfLastWord(string s) {


    istringstream iss(s);
    vector<string> words;
    string word;
    while (iss >> word) {
        words.push_back(word);
    }



        // vector<string> splitString;
        // int answer = 0;
        // string store;
        // for(int i = 0; i < s.length(); i++){
        //     if(s[i]==' '){
        //         splitString.push_back(store);
        //         store="";
        //     }
        //     store+=s[i];
        // }
        for(int i = 0; i < word.size(); i++){
            cout << word[i] << endl;
        }
        // return splitString[splitString.size()-1].length();
        return word.size();
        // return 0;
    }
};