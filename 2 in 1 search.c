#include<stdio.h>
#include<stdlib.h>
int binarysearch(int arr[],int size,int target);
int linearsearch(int arr[],int size,int traget);
int main()
{
    char ch;
    printf("Enter 'B' for binary search and 'L' for linear search : ");
    scanf("%c",&ch);
    switch(ch){
    case 'B':
    {
    int size;
    printf("Enter size of an array=");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements in sorted order only : \n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("Enter target element to be searched for : ");
    scanf("%d",&target);
    int result=binarysearch(arr,size,target);
    if(result!=-1){
        printf("Element found at index : %d",result);
    }
    else{
        printf("Invalid input please ensure before entering it");
    }
    }
    break;
    case 'L':
    {
    int size;
    printf("Enter size of an array=");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements : \n",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("Enter target element to be searched for : ");
    scanf("%d",&target);
    int result1=linearsearch(arr,size,target);
    if(result1!=-1){
        printf("Element found at index : %d",result1);
    }
    else{
        printf("Invalid input please ensure it before entering");
    }
}
break;
default:
printf("invalid input please enter correct number for searching method");
}
}
int binarysearch(int arr[],int size,int target){
    int high,low,mid;
    low=0;
    high=size-1;
    while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<target){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
return -1;
}
int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
