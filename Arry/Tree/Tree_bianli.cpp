/*
 * @Descripttion: 这里面放着
 * @version:
 * @Author: sky.xu
 * @Date: 2024-08-17 21:19:06
 * @LastEditTime: 2024-08-17 23:41:20
 * @FilePath: \data_structure\Arry\Tree\Tree_bianli.cpp
 */
#include <iostream>
#include <stack>
using namespace std;
typedef struct
{
    int data[100];
    TreeNode *left, *right;

} TreeNode;
void pre_Order(TreeNode *root)
{

    if (NULL == root)
    {
        return;
    }
    stack<TreeNode *> nodeStack;
    nodeStack.push(root);
    while (!nodeStack.empty())
    {
        TreeNode *node = nodeStack.top();
        printf("%d", node->data);
        nodeStack.pop();
        if (node->right)
            nodeStack.push(node->right);
        if (node->right)
            nodeStack.push(node->right);
    }
}
int main()
{
    cout << "this is a test!" << endl;
    return 0;
}