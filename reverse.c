#include <stdio.h>
void reverseArray(int *arr,int size)
{
    int *left=arr;
    int *right=arr+size-1;
    int temp;
    while (left<right) 
    {
        temp=*left;
        *left=*right;
        *right=temp;
        left++;
        right--;
    }
}
int main() 
{
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("Original array: ");
    for (i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    reverseArray(arr,size);
    printf("Reversed array: ");
    for (i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
     printf("\n");
     return 0;
 }
