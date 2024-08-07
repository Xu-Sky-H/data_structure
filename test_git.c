/*
 * @Descripttion: 
 * @version: 
 * @Author: sky.xu
 * @Date: 2024-08-07 10:32:24
 * @LastEditTime: 2024-08-07 10:37:41
 * @FilePath: \data_structure\test_git.c
 */
#include <stdio.h>
void sort(int arr[],int size)
{
   int tmp  = 0;
   for(int i = 0; i < size - 1; ++i)
   {
   for (int j = 0; i < size - 1; ++j )
   {
   	if(arr[j] > arr[j+1])
	{
	tmp = arr[j];
	arr[j] = arr[j + 1];
	arr[j + 1] = tmp;
	
	}
   }
   
   }

}
int main()
{
    int arr[] = {11,12,45,1,45,54,8,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    return 0;

}
