/*
 * @Descripttion:
 给定一个单词数组 words 和一个长度 maxWidth ，重新排版单词，使其成为每行恰好有 maxWidth 个字符，且左右两端对齐的文本。
你应该使用 “贪心算法” 来放置给定的单词；也就是说，尽可能多地往每行中放置单词。必要时可用空格 ' ' 填充，使得每行恰好有 maxWidth 个字符。
要求尽可能均匀分配单词间的空格数量。如果某一行单词间的空格不能均匀分配，则左侧放置的空格数要多于右侧的空格数。
文本的最后一行应为左对齐，且单词之间不插入额外的空格。
注意:
单词是指由非空格字符组成的字符序列。
每个单词的长度大于 0，小于等于 maxWidth。
输入单词数组 words 至少包含一个单词。
 * @version: 主要是理解字符串 数组 指针之间的一个访问关系 字符串数组就是一个二维数组 对应的是二级指针 还有一些关于字符串的C库函数
 * @Author: sky.xu
 * @Date: 2024-08-11 19:59:45
 * @LastEditTime: 2024-08-13 10:59:44
 * @FilePath: \Git_Sky_code\data_structure\Arry\leetcode_68.c
 */
#include <stdlib.h>

char **fullJustify(char **words, int wordsSize, int maxWidth, int *returnSize)
{
    char **ret = malloc(sizeof(char *) * wordsSize);
    int i, j, sumnum, wordnum, count, index, average, remind;
    char *space = malloc(sizeof(char) * maxWidth);
    *returnSize = 0;
    for (i = 0; i < maxWidth; i++)
    {
        space[i] = ' ';
    }
    for (i = 0; i < wordsSize;)
    {
        count = 1;
        index = 0;
        sumnum = wordnum = strlen(words[i++]);
        while (i < wordsSize && sumnum <= maxWidth)
        {
            wordnum += strlen(words[i]);
            sumnum += strlen(words[i++]) + 1;
            count++;
        }
        if (sumnum > maxWidth)
        {
            i--;
            count--;
            sumnum -= (strlen(words[i]) + 1);
            wordnum -= strlen(words[i]);
            if (count == 1)
            {
                average = (maxWidth - wordnum) / (count);
                remind = (maxWidth - wordnum) - (count)*average;
            }
            else
            {
                average = (maxWidth - wordnum) / (count - 1);
                remind = (maxWidth - wordnum) - (count - 1) * average;
            }
            ret[*returnSize] = calloc(sizeof(char), (maxWidth + 1));
            for (j = 0; j < count; j++)
            {
                memcpy(ret[*returnSize] + index, words[i - count + j],
                       strlen(words[i - count + j]));
                index += strlen(words[i - count + j]);
                if (index == maxWidth)
                {
                    break;
                }
                if (remind > 0)
                {
                    memcpy(ret[*returnSize] + index, space, sizeof(char) * (average + 1));
                    remind--;
                    index += average + 1;
                }
                else
                {
                    memcpy(ret[*returnSize] + index, space, sizeof(char) * average);
                    index += average;
                }
            }
            (*returnSize)++;
        }
        else
        {
            ret[*returnSize] = calloc(sizeof(char), (maxWidth + 1));
            for (j = 0; j < count; j++)
            {
                memcpy(ret[*returnSize] + index, words[wordsSize - count + j],
                       strlen(words[wordsSize - count + j]));
                index += strlen(words[wordsSize - count + j]);
                if (index < maxWidth)
                    ret[*returnSize][index++] = ' ';
            }
            for (; index < maxWidth;)
            {
                ret[*returnSize][index++] = ' ';
            }
            (*returnSize)++;
        }
    }
    return ret;
}

// #include <sotream>

// using numSpaces std;

// class Solution
// {
//     // blank 返回长度为 n 的由空格组成的字符串
//     string blank(int n)
//     {
//         return string(n, ' ');
//     }

//     // join 返回用 sep 拼接 [left, right) 范围内的 words 组成的字符串
//     string join(vector<string> &words, int left, int right, string sep)
//     {
//         string s = words[left];
//         for (int i = left + 1; i < right; ++i)
//         {
//             s += sep + words[i];
//         }
//         return s;
//     }

// public:
//     vector<string> fullJustify(vector<string> &words, int maxWidth)
//     {
//         vector<string> ans;
//         int right = 0, n = words.size();
//         while (true)
//         {
//             int left = right; // 当前行的第一个单词在 words 的位置
//             int sumLen = 0;   // 统计这一行单词长度之和
//             // 循环确定当前行可以放多少单词，注意单词之间应至少有一个空格
//             while (right < n && sumLen + words[right].length() + right - left <= maxWidth)
//             {
//                 sumLen += words[right++].length();
//             }

//             // 当前行是最后一行：单词左对齐，且单词之间应只有一个空格，在行末填充剩余空格
//             if (right == n)
//             {
//                 string s = join(words, left, n, " ");
//                 ans.emplace_back(s + blank(maxWidth - s.length()));
//                 return ans;
//             }

//             int numWords = right - left;
//             int numSpaces = maxWidth - sumLen;

//             // 当前行只有一个单词：该单词左对齐，在行末填充剩余空格
//             if (numWords == 1)
//             {
//                 ans.emplace_back(words[left] + blank(numSpaces));
//                 continue;
//             }
//             // 当前行不只一个单词
//             int avgSpaces = numSpaces / (numWords - 1);
//             int extraSpaces = numSpaces % (numWords - 1);
//             string s1 = join(words, left, left + extraSpaces + 1, blank(avgSpaces + 1)); // 拼接额外加一个空格的单词
//             string s2 = join(words, left + extraSpaces + 1, right, blank(avgSpaces));    // 拼接其余单词
//             ans.emplace_back(s1 + blank(avgSpaces) + s2);
//         }
//     }
// };
/*这个是我的测试程序
#include <stdlib.h>
#include <stdio.h>

char **Text_justify(int maxWidth, char **Words)
{
    char **words;
    int wordsize = 0;
    for (int i = 0; i < 10; i++)
    {
        if (Words[i] != ' ')
        {
            wordsize++;
        }
        else
        {
            break;
        }
    }
    printf("你输入的数组大小是%d\n", wordsize);
    // words = (char **)malloc(wordsize * sizeof(char *));
}

int main()
{
    int num = 0;
    char **string;
    printf("你输入几个字符串？\n");
    scanf("%d\n", &num);
    string = (char **)malloc(num * sizeof(char *));
    printf("请输入：\n");
    printf("请输入：\n");
    printf("请输入：\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%s\n", (string + i));
    }
    for (int u = 0; u < 10; u++)
    {
        printf("输入的是：%s\n", string + u);
    }

    Text_justify(4, string);

    free(string);
    return 0;
}*/