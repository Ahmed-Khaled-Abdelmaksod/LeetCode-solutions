# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def inorderTraversal(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[int]
        """
        list = []
        self.sol(root,list)
        return list

    def sol(self,root,list):
        if not root :
            return
        if root.left is not None:
            self.sol(root.left,list) 
        list.append(root.val)
        if root.right is not None:
            self.sol(root.right,list) 