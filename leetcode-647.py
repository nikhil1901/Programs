class Solution(object):
    def countSubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        output = []
        def substring(index1, index2):
            if index1 < 0 or index2 == len(s):
                return
            if index1 == index2:
                output.append(1)
                substring(index1, index2 + 1)
                substring(index1 - 1, index2 + 1)
            
            else:
                if s[index1] == s[index2]:
                    output.append(1)
                    substring(index1 - 1, index2 + 1)
            
        for index in range(len(s)):
            substring(index, index)
        
        return sum(output)
