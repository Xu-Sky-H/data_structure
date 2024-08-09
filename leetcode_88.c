/*
 * @Descripttion:
 给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，其中前
 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。
 示例 1：
输入：nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
输出：[1,2,2,3,5,6]
解释：需要合并 [1,2,3] 和 [2,5,6] 。
合并结果是 [1,2,2,3,5,6] ，其中斜体加粗标注的为 nums1 中的元素。
 * @version:
 * @Author: sky.xu
 * @Date: 2024-08-08 21:24:11
 * @LastEditTime: 2024-08-08 22:49:31
 * @FilePath: \Git_Sky_code\data_structure\leetcode_88.c
 */
#include <stdio.h>
int *merage_arr(int *num1, int *num2, int size1, int size2)
{
    /*方法1：直接就是合并，然后开始排序*/
    // 1.先合并
    int m = size1 + size2;
    for (int i = 0; i < size2; i++)
    {
        *(num1 + size1 + i) = *(num2 + i);
    }
    // 排序
    for (int d = m - 1; d > 0; d--)
    {
        for (int p = 0; p < d; p++)
        {
            if (*(num1 + p) > *(num1 + p + 1))
            {
                int zhongjian = *(num1 + p);
                *(num1 + p) = *(num1 + p + 1);
                *(num1 + p + 1) = zhongjian;
            }
        }
    }

    return num1;
}
int main()
{
    int num1[100]; // 第一声明称空数组报错（不给初值） 二给了初值后会发现乱存
    int num2[100];
    int *end = NULL;
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
    temp = size1 + size2;
    printf("-----------------\n");
    end = merage_arr(num1, num2, size1, size2);
    for (int w = 0; w < temp; w++)
    {
        printf("这是合并输入的内容%d\n", *(end + w));
    }
    printf("ending\n");
    return 0;
}