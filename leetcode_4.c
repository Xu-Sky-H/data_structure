/*
 * @Descripttion: 寻找两个正序数组的中位数
 * @version: 给定两个大小分别为 m 和 n 的正序（从小到大）数组 nums1和 nums2.请你找出并返回这两个正序数组的中位数 。
算法的时间复杂度应该为 O(log (m+n)) 。
示例 1：
输入：nums1 = [1,3], nums2 = [2]
输出：2.00000
解释：合并数组 = [1,2,3] ，中位数 2
示例 2：
输入：nums1 = [1,2], nums2 = [3,4]
输出：2.50000
解释：合并数组 = [1,2,3,4] ，中位数 (2 + 3) / 2 = 2.5
 * @Author: sky.xu
 * @Date: 2024-08-08 10:41:25
 * @LastEditTime: 2024-08-08 16:24:12
 * @FilePath: \Git_Sky_code\data_structure\leetcode_4.c
 */
#include <stdio.h>

double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    /*排序*/
    for (int i = 0; i < nums1Size; i++)
    {
        for (int j = i + 1; j < nums1Size; j++)
        {

            if (nums1[i] > nums1[j])
            {


            }
        }
    }
}

int main()
{
}