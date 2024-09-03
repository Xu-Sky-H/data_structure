/*
 * @Descripttion: 
 * @version: 
 * @Author: sky.xu
 * @Date: 2024-08-09 11:13:36
 * @LastEditTime: 2024-08-24 11:55:07
 * @FilePath: \data_structure\sky\main.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000

// 用于存储月份计数的结构体
typedef struct {
    char year_month[8]; // 存储格式为 "YYYY-MM"
    int count;
} YearMonthCount;

// 比较函数，用于排序
int compare(const void *a, const void *b) {
    YearMonthCount *amcA = (YearMonthCount *)a;
    YearMonthCount *amcB = (YearMonthCount *)b;
    return strcmp(amcA->year_month, amcB->year_month);
}

int main() {
    int n;
    YearMonthCount counts[MAX_LINES];
    char date[11]; // 存储 "YYYY-MM-DD"

    // 处理多个测试用例
    while (scanf("%d", &n) != EOF && n > 0 && n <= MAX_LINES) {
        YearMonthCount *current = counts; // 指向当前计数结构体的指针

        // 读取日期并更新计数
        for (int i = 0; i < n; ++i) {
            scanf("%s", date);
            strncpy(current->year_month, date, 7); // 只复制年月部分
            current->year_month[7] = '\0'; // 确保字符串结束符
            current->count = 1; // 初始化计数

            // 检查是否已存在该年月的计数
            for (YearMonthCount *prev = counts; prev < current; ++prev) {
                if (strcmp(prev->year_month, current->year_month) == 0) {
                    prev->count++; // 增加计数
                    break;
                }
            }

            // 移动指针到下一个结构体
            current++;
        }

        // 排序
         qsort(counts, n, sizeof(YearMonthCount), compare);

        // 输出结果
int m = 0;
        for (int i = 0; i < n; ++i)
         {
         if(counts[i].year_month == counts[i+1].year_month)
          {
             m = m+1;
            printf("%s:%d\n", counts[m].year_month, counts[m].count);
          }

        }


    }

    return 0;
}