class Solution {
public:
    
    bool isVowel(char c){
        if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') return true;
        return false;
    }
    
    string reverseVowels(string s) {
        int i = 0, j = s.length() - 1;
        
        while(i<j){
            if( isVowel(s[i]) and isVowel(s[j]) ){
                char c = s[i];
                s[i] = s[j];
                s[j] = c;
                
                i++;
                j--;
            }
            
            
            if( !isVowel(s[i]) ) i++;
            
            if( !isVowel(s[j]) ) j--;
        }
        
        return s;
    }
};
