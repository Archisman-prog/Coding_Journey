class Solution:
    def isPalindrome(self, x: int) -> bool:
        s2 = str(x)
        s3 = s2[ : :-1]
        if s2 == s3 :
            return 0 == 0
        else:
            return 0 == 1
        