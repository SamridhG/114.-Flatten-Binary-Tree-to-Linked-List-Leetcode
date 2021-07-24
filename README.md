# 114.-Flatten-Binary-Tree-to-Linked-List-Leetcode



Given the root of a binary tree, flatten the tree into a "linked list":



The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.


The "linked list" should be in the same order as a pre-order traversal of the binary tree.
 


Example 1:

![image](https://user-images.githubusercontent.com/63790684/126858532-8a3310e4-cea8-4a0f-b5c7-4a95178f4c04.png)


Input: root = [1,2,5,3,4,null,6]



Output: [1,null,2,null,3,null,4,null,5,null,6]



Example 2:


Input: root = []


Output: []


Example 3:


Input: root = [0]


Output: [0]
 
 

Constraints:



The number of nodes in the tree is in the range [0, 2000].


-100 <= Node.val <= 100
