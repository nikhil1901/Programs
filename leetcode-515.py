# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def largestValues(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        
        if root == None:
            return []
        
        def bfs():
            while len(queue):
                node = queue.pop(0)
                curr_depth = depth.pop(0)
                if len(output) < curr_depth + 1:
                    output.append(node.val)
                else:
                    output[curr_depth] = max(output[curr_depth], node.val)
                if node.left != None:
                    queue.append(node.left)
                    depth.append(curr_depth + 1)
                if node.right != None:
                    queue.append(node.right)
                    depth.append(curr_depth + 1)                                
        
        queue = list()        
        depth = list()
        output = list()
        queue.append(root)
        depth.append(0)
        output.append(root.val)
        bfs()
        
        return output
