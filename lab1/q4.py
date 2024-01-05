
class Node:
	def __init__(self, v):
		self.left = None
		self.right = None
		self.data = v

def printInorder(root):
	if root:
		
		printInorder(root.left)
		
		
		print(root.data,end=" ")
		
		
		printInorder(root.right)
def printpreorder(root):
	if root:
		
		print(root.data,end=" ")
		
		
		printInorder(root.left)
		
		
		printInorder(root.right)
def printpostorder(root):
	if root:
		
		printInorder(root.left)
		
		printInorder(root.right)
		print(root.data,end=" ")
		
		

if __name__ == "__main__":
	root = Node(25)
	root.left = Node(15)
	root.right = Node(50)
	root.left.left = Node(10)
	root.left.right = Node(22)
	root.right.left = Node(35)
	root.right.right = Node(70)
	root.left.left.left=Node(4)
	root.left.left.right=Node(12)
	root.left.right.left=Node(18)
	root.left.right.right=Node(24)
	root.right.left.left=Node(31)
	root.right.left.right=Node(44)
	root.right.right.left=Node(66)
	root.right.right.right=Node(90)


	print("Inorder Traversal:",end=" ")
	printInorder(root)
	print("preorder Traversal:",end=" ")
	printpreorder(root)
	print("postorder Traversal:",end=" ")
	printpostorder(root)

