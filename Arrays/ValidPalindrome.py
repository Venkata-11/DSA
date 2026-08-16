class Solution(object):
    def isPalindrome(self, s):
        s = s.lower()
        new = ""

        for i in range(len(s)):
            if s[i].isalnum():
                new = new + s[i]

        length = len(new)

        for i in range(len(new)):
            if new[i] != new[length - 1 - i]:
                return False

        return True
