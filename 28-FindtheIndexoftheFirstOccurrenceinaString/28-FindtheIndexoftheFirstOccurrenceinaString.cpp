// Last updated: 7/17/2025, 5:57:18 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int flag =0;
        int index=0;
        int returned = -1;
        for(int i=0;i<haystack.length();i++)
        {
            int z = i;
            for(int j=0;j<needle.length();j++)
            {
                if(needle[j] != haystack[z++])
                {
                    break;
                }
                if(j == needle.length() -1)
                {
                    flag = 1;
                    index = i;
                }
            }
            if(flag==1)
            {    
                returned = index;
                break;
            }
            else if (i == haystack.length() - 1)
            {
                returned = -1;
                break;
            }
        }
        return returned;
    }
        
    
};