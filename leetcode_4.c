/*
 * @Descripttion: 给定两个大小分别为 m 和 n 的正序（从小到大）数组 nums1 和 nums2。请你找出并返回这两个正序数组的 中位数 。
算法的时间复杂度应该为 O(log (m+n)) 。
 * @version:
 示例 1：
输入：nums1 = [1,3], nums2 = [2]
输出：2.00000
解释：合并数组 = [1,2,3] ，中位数 2
 * @Author: sky.xu
 * @Date: 2024-08-09 10:52:12
 * @LastEditTime: 2024-08-09 14:14:08
 * @FilePath: \Git_Sky_code\data_structure\leetcode_4.c
 */
#include <stdio.h>

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    int m = nums1Size + nums2Size;
    double Mid_Val = 0;
    // 合并
    for (int i = 0; i < nums2Size; i++)
    {
        *(nums1 + nums1Size + i) = *(nums2 + i);
    }
    /*排序*/
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < m; j++)
        {
            if (nums1[i] >= nums1[j])
            {
                int temp = nums1[j];
                nums1[j] = nums1[i];
                nums1[i] = temp;
            }
        }
    }
    for (int w = 0; w < m; w++)
    {
        printf("这是合并排序后的内容%d\n", *(nums1 + w));
    }
    printf("----------------------%d\n", m);
    printf("----------------------%d\n", m % 2);
    printf("----------------------%.2f\n", m / 2);
    if ((m % 2) == 0)//因为这里没有加括号 导致出了一些bug 这是运算的优先级的问题
    {
        Mid_Val = ((*(nums1 + (int)(m / 2)) + *(nums1 + ((int)(m / 2) - 1)))) / 2.0;
    }
    else
    {
        Mid_Val = 99;//(*(nums1 + (int)(m / 2)));
    }

    return Mid_Val;
}

int main()
{
    int num1[100]; // 第一声明称空数组报错（不给初值） 二给了初值后会发现乱存
    int num2[100];
    double res = 0;
    int size1 = 0, size2 = 0, temp = 0;
    printf("请输入两个数组的大小\n");
    scanf("%d%d", &size1, &size2);
    printf("数组1和数组2的大小分别为：%d,%d\n", size1, size2);
    for (int u = 0; u < size1; u++)
    {
        scanf("%d", num1 + u);
        // num1[u] = temp;
    }
    for (int x = 0; x < size1; x++)
    {
        printf("这是数组1输入的内容%d\n", *(num1 + x));
    }
    for (int q = 0; q < size2; q++)
    {
        scanf("%d", num2 + q);
    }
    for (int w = 0; w < size2; w++)
    {
        printf("这是数组2输入的内容%d\n", *(num2 + w));
    }
    res = findMedianSortedArrays(num1, size1, num2, size2);
    printf("%.2f", res);
}