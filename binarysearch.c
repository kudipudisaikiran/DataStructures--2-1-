#include<stdio.h>
int binarySearch(int arr[], int first, int last, int key )
{
if (last>=first){
int mid = first + (last - first)/2; if (arr[mid] == key){
return mid;
}
if (arr[mid] > key){
return binarySearch(arr, first, mid-1, key);
}else{
return binarySearch(arr, mid+1, last, key);
}
}
return -1;
}
int main()
{
int arr[] = {10,20,30,40,50};
int key = 500;
int last=sizeof(arr)/sizeof(arr[0]); last = last-1;
int result = binarySearch(arr,0,last,key); if (result == -1)
printf("Element is not found!"); else
printf("Element is found at index:%d",result);
return 0;
}
