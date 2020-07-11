#define _CRT_SECURE_NO_WARNINGS 1

//1、insertsort
//#include "sort.h"
//#include <stdio.h>
//
//
//void printArray(int array[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{ 
//		printf("%d", array[i]);
//    }
//	printf("\n");
//}
//
//void insertsort(int array[], int size)
//{
//	for (int i = 1; i < size; ++i)
//	{
//		//模拟单个元素插入过程
//		int key = array[i];
//		int end = i - 1;
//		while (end>=0&&key < array[end])
//		{
//			array[end + 1] = array[end];
//			end--;
//		}
//		//插入元素
//		array[end + 1] = key;
//	}
//	
//}
//
//
/////////////////////////
//void Testsort()
//{
//	int array[] = { 1,2, 4 ,5, 6, 7, 8,3 };
//	printArray(array, sizeof(array) / sizeof(array[0]));
//	insertsort(array, sizeof(array) / sizeof(array[0]));
//	printArray(array, sizeof(array) / sizeof(array[0]));
//}
//
//#include "sort.h"
//void main()
//{
//	Testsort();
//	return 0;
//}




//2、shellsort
#include "sort.h"
#include <stdio.h>


void printArray(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}

void shellsort(int array[], int size)
{
	int gap = 3;
	while (gap > 0)
	{
		for (int i = gap; i < size; ++i)
		{
			//模拟单个元素插入过程
			int key = array[i];
			int end = i - gap;
			while (end >= 0 && key < array[end])
			{
				array[end + gap] = array[end];
				end -= gap;
			}
			//插入元素
			array[end + gap] = key;

		}
		gap--;
	}
	

}


///////////////////////
void Testsort()
{
	int array[] = {4,1,7,6,3,9,5,8,0,2 };
	printArray(array, sizeof(array) / sizeof(array[0]));
	shellsort(array, sizeof(array) / sizeof(array[0]));
	printArray(array, sizeof(array) / sizeof(array[0]));
}

#include "sort.h"
void main()
{
	Testsort();
	return 0;
}
