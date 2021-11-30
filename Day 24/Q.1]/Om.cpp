class Solution {
public:
    string reverseVowels(string s) {
        char arr[s.length()];
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' || s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' )
            {
                arr[count]=s[i];
                count++;
            }
        }
        count--;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' || s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'  )
            {
                s[i]=arr[count];
                count--;
            }
        }
         return s;
    }
   
};