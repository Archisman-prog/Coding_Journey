class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s1 = s.strip()
        l_word = s1.split()
        Leng = len(l_word[-1])
        return Leng
        