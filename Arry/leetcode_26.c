/*
 * @Descripttion:
 * @version:格式化代码是CTRL+ ALT +z
 * @Author: sky.xu
 * @Date: 2024-08-13 11:01:27
 * @LastEditTime: 2024-08-16 22:46:21
 * @FilePath: \Git_Sky_code\data_structure\Arry\leetcode_26.c
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int num[100];
    int n, m;
    int result = 0.00;
    scanf("%d%d", &n, &m);
    num[0] = n;

    for (int i = 0; i < m; i++)
    {
        num[i + 1] = sqrt(num[i]);
        result = result + num[i];
    }
    printf("%d", result);
}

// #include<stdio.h>
// #include<math.h>
// void sum(int n,int m)
// {
//     double num[1000];
//     double result = 0;
//     num[0] = n;
//     for(int i = 0;i < m;i++)
//     {
//         num[i+1] = sqrt(num[i]);
//         result = result +num[i];
//     }
//     printf("%.2f\n",result);
// }
// int main()
// {

//     int n,m;
//     // while(scanf("%d%d", &n, &m) != EOF)
//     // {
//     //     sum(n,m);
//     // }
//     scanf("%d%d\n",&n,&m);
//     sum(n,m);

//     return 0;
// }