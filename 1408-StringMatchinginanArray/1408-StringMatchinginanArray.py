class Solution(object):
    def stringMatching(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        soln = []
        for i in range(0,len(words)):

            for j in range(0,len(words)):
                if i == j:
                    continue
                if len(words[i]) <= len(words[j]):
                   if words[i] in words[j]:
                        soln.append(words[i])
                        break

        return list(set(soln))



        