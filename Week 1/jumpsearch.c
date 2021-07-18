#include<stdio.h>
#include<math.h>
#define SIZE 100

int jumpSearch(int array[], int size, int key)
{
   int start = 0;
   int end = sqrt(size); 

   while(array[end] <= key && end < size) 
   {
      start = end; 
      end += sqrt(size);
      if(end > size - 1)
         end = size; 
   }

   for(int i = start; i<end; i++) 
   { 
      if(array[i] == key)
         return i; 
   }
   return -1;
}

int main()
{
   int n, searchKey, loc,arr[SIZE];
   printf("Enter the number of elements you want \n");
   scanf("%d",&n);
   printf("Enter the elements of the array in sorted way \n");
   for(int i = 0; i< n; i++) 
   {
      scanf("%d",&arr[i]);
   }

   printf("Enter search key to search in the array: ");
   scanf("%d",&searchKey);
   if((loc = jumpSearch(arr, n, searchKey)) >= 0)
   {
      printf("Item found at location: %d ",loc); 
   }
   else
   {
      printf("Item is not found in the list.");
   }
}
