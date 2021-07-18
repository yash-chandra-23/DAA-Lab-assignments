
#include<stdio.h>
#define SIZE 100
int main()
{
    int arr[SIZE],n,m,flag;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter the elements of the Array\n");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered Elements of Array are \n");
    for (int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n Enter the element you want to check in the Array\n");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(m== arr[i])
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("Yes element found in Array \n ");
    }
    else
    {
       printf("No element found in Array \n");
    }
    
    
}
