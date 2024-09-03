/*
 * @Descripttion:
 * @version:
 * @Author: sky.xu
 * @Date: 2024-09-03 14:03:43
 * @LastEditTime: 2024-09-04 01:29:15
 * @FilePath: \data_structure\sky\_song.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// // #pragma pack(push, 1)
// // typedef struct
// // {
// //     int n;
// //     double d;
// //     char c;
// // } my_stru;
// // #pragma pack(pop)

// // int small_space(int n, double d, char c)
// // {
// //     my_stru val = {0, 0, 0};

// //     val.n = n;
// //     val.d = d;
// //     val.c = c;
// //     return sizeof(val);
// // }
// // int main()
// // {int a = 0;


// //     a = small_space(1,1.000,'a');
// //     printf("%d",a);
// //     return 0;
// // }
// #include <stdio.h>
// #include <stdlib.h>

// #include <stdio.h>
// #include <stdlib.h>

// // 定义链表节点结构体
// typedef struct ListNode {
//     int val;
//     struct ListNode *next;
// } ListNode;

// // 创建新节点
// ListNode* createNode(int val) {
//     ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
//     if (!newNode) {
//         return NULL;
//     }
//     newNode->val = val;
//     newNode->next = NULL;
//     return newNode;
// }

// // 将数组转换为链表
// ListNode* arrayToList(int* arr, int n) {
//     if (n <= 0) {
//         return NULL;
//     }
//     ListNode *head = createNode(arr[0]);
//     ListNode *current = head;
//     for (int i = 1; i < n; i++) {
//         current->next = createNode(arr[i]);
//         current = current->next;
//     }
//     return head;
// }

// // 删除链表中所有值为x的节点
// void deleteX(ListNode* head, int x) {
//     ListNode *current = head;
//     ListNode *prev = NULL;
//     while (current != NULL) {
//         if (current->val == x) {
//             if (prev == NULL) {
//                 // 删除头节点
//                 head = current->next;
//                 free(current);
//                 current = head;
//             } else {
//                 // 删除非头节点
//                 prev->next = current->next;
//                 free(current);
//                 current = prev->next;
//             }
//         } else {
//             prev = current;
//             current = current->next;
//         }
//     }
// }

// // 打印链表
// void printList(ListNode* head) {
//     ListNode *current = head;
//     while (current != NULL) {
//         printf("%d ", current->val);
//         current = current->next;
//     }
//     printf("\n");
// }

// // 释放链表内存
// void freeList(ListNode* head) {
//     ListNode *current = head;
//     while (current != NULL) {
//         ListNode *next = current->next;
//         free(current);
//         current = next;
//     }
// }

// int main() {
//     int n, x;
//     printf("Enter the length of the array and the value to delete: ");
//     scanf("%d %d", &n, &x);

//     int* arr = (int*)malloc(n * sizeof(int));
//     printf("Enter the elements of the array: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     ListNode* head = arrayToList(arr, n);
//     deleteX(head, x);
//     printf("Linked list after deleting all nodes with value %d: ", x);
//     printList(head);
//     freeList(head);
//     free(arr);

//     return 0;
// }
int main()
{
    int num[][4] = {1,2,5,10,20,11};
    printf("%d",num[0][3]);
    printf("%d",num[1][0]);
    

}