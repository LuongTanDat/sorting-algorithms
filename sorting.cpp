#include "sorting.h"

void swap(int* arr, int i, int j)
{
   int temp = *(arr + i);
   *(arr + i) = *(arr + j);
   *(arr + j) = temp;
}

void insert(int* arr, int src, int dst)
{
   int temp = *(arr + src);
   for (int i = src; i > dst; i --)
      swap(arr, i, i - 1);
   *(arr + dst) = temp;
}

void insert2(int* srcAddr, int* dstAddr)
{
   int dst = 0;
   int src = srcAddr - dstAddr;
   insert(dstAddr, src, dst);
}

void bubbleSort(int* arr, int len)
{
   int n = -1;
   bool swapped = true;

   while (swapped)
   {
      n ++;
      swapped = false;
   
      for(int i=1; i < len - n; i ++)
      {
         if (*(arr + i - 1) > *(arr + i))
         {
            swap(arr, i - 1, i);
            swapped = true;
         }
      }
   }
}

void selectionSort(int* arr, int len)
{
   for (int i = 1; i < len; i ++)
   {
      int m_idx = i - 1;
      for (int j = i; j < len; j ++)
      {
         if (*(arr + m_idx) > *(arr + j))
            m_idx = j;
      }
      swap(arr, i-1, m_idx);
   }
}

void insertionSort(int* arr, int len)
{
   for (int i = 1; i < len; i ++)
   {
      for (int j = 0; j < i; j ++)
      {
         if (*(arr + i) < *(arr + j))
         {
            insert(arr, i, j);
         }
      }
   }
}

void merge(int* arrA, int* arrB, int lenA, int lenB)
{
   for (int i = 0; i < lenB; i ++)
   {
      for (int j = 0; j < lenA; j ++)
         if (*(arrB + i) < *(arrA + j))
            insert2(arrB + i, arrA + j);
   }
}

void mergeSort(int* arr, int len)
{
   if (len == 1)
      return;
   else
   {
      int idx = len / 2;

      int* arrA = arr;
      int lenA = idx;
      mergeSort(arrA, lenA);

      int* arrB = arr + idx;
      int lenB = len - idx;
      mergeSort(arrB, lenB);
      
      merge(arrA, arrB, lenA, lenB);
   }
}

void quickSort(int* arr, int len)
{
   for (int i = 0; i < len; i ++)
   {
      
   }
}
