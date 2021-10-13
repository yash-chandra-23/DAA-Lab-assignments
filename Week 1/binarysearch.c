#include<stdio.h>

int binarySearch(int arr[],int n,int x)
{
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else
        {
            if(arr[mid]>x)
                h=mid-1;
            else
                l=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n,x;
    printf("Enter array size\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element you want to search\n");
    scanf("%d",&x);
    int a = binarySearch(arr,n,x);
    if(a==-1)
        printf("Element not found");
    else
        printf("Element found at index %d",a);
    return 0;
}
