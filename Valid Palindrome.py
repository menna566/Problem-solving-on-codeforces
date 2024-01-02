class Solution:
    def isPalindrome(self, s: str) -> bool:
        if len(s)==0 :
            return True
        out=''
        for i in range(0,len(s)):
             if s[i].isalpha() or s[i].isdigit():
                      out+=s[i]
        return (out.lower()==out[::-1].lower())  
