/*
 * @Descripttion: 主要是为了解一下树的遍历。递归和非递归的实现。
 1.递归与栈有关系（大话数据结构提到）
 2.递归试用场景像能帮大问题拆检成一个一个小问题的时就适合，像：前n项和 ，爬楼梯
 * @version:
 * @Author: sky.xu
 * @Date: 2024-08-17 20:14:44
 * @LastEditTime: 2024-08-17 21:01:06
 * @FilePath: \data_structure\Arry\Tree\Tree_bianli.c
 */
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int data[100];
    TreeNode *l, *r;

} TreeNode;
/*使用递归的思想做遍历*/
// 这是个先序遍历
void pre_order(TreeNode **root)
{
    if (NULL == root)
    {
        return 0;
    }
    printf("%d", (**root).data); // 根
    pre_order((*root)->l);       // 左
    pre_order((*root)->r);       // 右
}
// 中序就是左 根 右 后序就是 左 右 根
/*非递归版本*/
// 先序遍历
void pre_Order(TreeNode *root)
{
    if (NULL == root)
        return;
    stack<TreeNode *> nodeStack;

    
}

int main()
{
    printf("this is study\n");

    return 0;
}
