class Solution(object):
    def stringMatching(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        words.sort(key=len)
        soln = set()
        for i in range(0,len(words)):

            for j in range(i+1,len(words)):
                if len(words[i]) <= len(words[j]):
                   if words[i] in words[j]:
                        soln.add(words[i])
                        break

        return list(soln)



        