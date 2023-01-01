//Find the smallest and second smallest element in an array.

#include<stdio.h>
int main()
{
    int arr[100],i,j,n,temp;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements of array : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array is : \n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nSorted array is : \n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nSmallest Element is : %d",arr[0]);
    printf("\nSecond Smallest Element is : %d",arr[1]);
    printf("\n");
    return 0;
}
