class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size()-1;
        int flag=0,flag2=0;
        while(i<=j)
        {
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U') i++;
            else flag = 1;
            if(s[j]!='a'&&s[j]!='e'&&s[j]!='i'&&s[j]!='o'&&s[j]!='u'&&s[j]!='A'&&s[j]!='E'&&s[j]!='I'&&s[j]!='O'&&s[j]!='U') j--;
            else flag2 = 1;
            if(flag&&flag2)
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
                flag=0;
                flag2=0;
            }
            
        }
        return s;
    }
};
