# Definition for a binary tree node.
class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None

a = TreeNode(4)
a.left = None

b = TreeNode(7)
a.right = b

c = TreeNode(6)
f = TreeNode(8)
e = TreeNode(9)
b.left = c
b.right = f
f.left = None
f.right = e

def minDepth(root):
    if not root:
        return 0
    d = map(minDepth, (root.left, root.right))
    print "maxD:" + str(max(d))
    print "MinD:" + str(min(d))
    return 1 + (min(d) or max(d))

print minDepth(a)
