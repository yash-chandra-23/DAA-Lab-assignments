#include<stdio.h>
#define SIZE 100
int linearsearch(int arr[], int n,int m)
{
  int flag =0,comp=0;
  for(int i= 0; i<n; i++)
  {
      if(arr[i]==m)
      {
          flag=1;
          comp++;
          break;
      }
      else
      {
          comp++;
          
      }
      
  }
  if(flag==1)
  {
      printf("Element found in the array and number of comparison= %d \n", comp);
  }
  else
  {
      printf("Element not found in the aaray and number of comparison= %d \n", comp);
  }
}

int main()
{
    int test,n,m,arr[SIZE];
    printf("Enter the test case you want to test in the program \n");
    scanf("%d",&test);
    for(int i=0; i<n; i++)
    {
        printf("Enter the number of Element you want in array \n");
        scanf("%d",&n);
        printf("Enter the elements of the array \n");
        for(int k=0;k<n;k++)
        {
            scanf("%d",&arr[k]);
        }
        printf("Enter the Element you want search \n");
        scanf("%d",&m);
         linearsearch(arr,n, m);
        
    }
    return 0;
}
