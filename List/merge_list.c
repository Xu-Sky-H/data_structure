/*
 * @Descripttion:
 * @version:
 * @Author: sky.xu
 * @Date: 2024-08-19 14:11:28
 * @LastEditTime: 2024-08-19 15:59:52
 * @FilePath: \data_structure\List\merge_list.c
 */
#include <stdio.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int *merge_data(int **arr, int size_lie)
{
    int merge[100] = {0};

    for (int i = 0; i < size_lie; i++)
    {
        *(*arr)
    }
}

int main()
{
    int arr[3][3] = {};

    scanf("%d%d%d", &arr[0][0], &arr[0][1], &arr[0][2]);
    scanf("%d%d%d", &arr[1][0], &arr[1][1], &arr[1][2]);
    scanf("%d%d%d", &arr[2][0], &arr[2][1], &arr[2][2]);

    printf("输出是：%d %d %d", arr[0][0], arr[0][1], arr[0][2]);
    printf("输出是：%d %d %d", arr[1][0], arr[1][1], arr[1][2]);
    printf("输出是：%d %d %d", arr[2][0], arr[2][1], arr[2][2]);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int rows, cols;
//     printf("请输入二维数组的行数: ");
//     scanf("%d", &rows);
//     printf("请输入二维数组的列数: ");
//     scanf("%d", &cols);

//     // 为二维数组分配内存
//     int **array_2d = (int **)malloc(rows * sizeof(int *));
//     for (int i = 0; i < rows; i++) {
//         array_2d[i] = (int *)malloc(cols * sizeof(int));
//     }

//     // 接收用户输入的数据
//     printf("请输入数组元素（用空格分隔）:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &array_2d[i][j]);
//         }
//     }

//     // 打印二维数组
//     printf("输入的二维数组是:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", array_2d[i][j]);
//         }
//         printf("\n");
//     }

//     // 释放分配的内存
//     for (int i = 0; i < rows; i++) {
//         free(array_2d[i]);
//     }
//     free(array_2d);

//     return 0;
// }