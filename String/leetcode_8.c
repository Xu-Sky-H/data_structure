/*
 * @Descripttion:
 请你来实现一个 myAtoi(string s) 函数，使其能将字符串转换成一个 32 位有符号整数。
函数 myAtoi(string s) 的算法如下：
空格：读入字符串并丢弃无用的前导空格（" "）
符号：检查下一个字符（假设还未到字符末尾）为 '-' 还是 '+'。如果两者都不存在，则假定结果为正。
转换：通过跳过前置零来读取该整数，直到遇到非数字字符或到达字符串的结尾。如果没有读取数字，则结果为0。
舍入：如果整数数超过 32 位有符号整数范围 [−231,  231 − 1] ，需要截断这个整数，使其保持在这个范围内。具体来说，小于 −231 的整数应该被舍入为 −231 ，大于 231 − 1 的整数应该被舍入为 231 − 1 。
返回整数作为最终结果。
 * @version:可以查阅C primer11.2章 12.4内存申请 4.2字符串简介 因为字符串的原因 所以有数组指针和指针数组 指针和数组之间的关系
 * @Author: sky.xu
 * @Date: 2024-08-09 15:46:49
 * @LastEditTime: 2024-08-10 13:58:18
 * @FilePath: \Git_Sky_code\data_structure\String\leetcode_8.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int myAtoi(char *s)
{
    int size = strlen(s);
    printf("字符串大小为：%d\n", size);
    char mem[100];
    int flage = 2;
    int a = 0;
    for (int i = 0; i < size; i++)
    {
        printf("输出字符串:%c\n", *(s + i));
        if ((*(s + i) != ' ') && ('9' > *(s + i)) && (*(s + i) > '0'))//错误的 不能连续比较
            {
                mem[a] = *(s + i);
                a += 1;
            }
        if (*(s + i) == '+') //+
        {
            flage = 1;
        }
        else if (*(s + i) == '-') //-
        {
            flage = 0;
        }
        else
        {
            flage = 1;
        }
    }
    for (int u = 0; u < size; u++)
    {
        printf("处理后的字符串:%s\n", mem);
    }
    int res = atoi(mem);
    return res;
}
int main()
{
    char str[100];
    int Res = 0;
    printf("你输入的字符串\n");
    scanf("%s", str);
    Res = myAtoi(str);
    printf("你输入的字符串%d\n", Res);
    return 0;
}
/*

int myAtoi(char* s) {
    long count=0;
    int sign=1;
    int i=0;

    //跳过空白字符
    while(s[i]==' '){
        i++;
    }

    //判断正负性
    if(s[i]=='-'||s[i]=='+'){
        sign=(s[i]=='-')?-1:1;
        i++;
    }

    //转换数字字符
    while(s[i]>='0'&&s[i]<='9'){
        count=count*10+(s[i]-'0');
        if(sign*count<-2147483648) return INT_MIN;
        if(sign*count>2147483647) return INT_MAX;
        i++;
    }
    
    //返回
    return (int)sign*count;

}








*/