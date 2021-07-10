#include "sorting.h"

int main()
{
   int a[] = {6, 5, 3, 1, 8, 7, 9, 2, 4};
   int len = sizeof(a) / sizeof(int);

   mergeSort(a, len);
   for(int i = 0; i < len; i ++)
   {
      cout << a[i] << endl;
   }
   return 0;
}

// g++ main.cpp sorting.cpp -o app