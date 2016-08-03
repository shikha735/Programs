# https://www.interviewbit.com/problems/reverse-the-string/
'''
Given an input string, reverse the string word by word.

Example:

Given s = "the sky is blue",

return "blue is sky the".
'''

class Solution:
    # @param A : string
    # @return string
    def reverseWords(self, A):
        li = A.split()
        li.reverse()
        str = ""
        for i in li:
            str = str + i + ' '
        return str[:-1]
