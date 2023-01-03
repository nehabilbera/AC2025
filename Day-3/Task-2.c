//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
//We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
//You must solve this problem without using the library's sort function.


#include<stdio.h>
int main()
{
    int arr[100];
    int i,n;
    printf("Enter range : \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array is : \n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int a[100]={0};
    for(i=0;i<n;i++){
        if(arr[i]==0){
            a[i]=arr[i];
            printf("%d\t",a[i]);
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==1){
            a[i]=arr[i];
            printf("%d\t",a[i]);
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==2){
            a[i]=arr[i];
            printf("%d\t",a[i]);
        }
    }
    return 0;

}
