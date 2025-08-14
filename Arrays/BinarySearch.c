#include <stdio.h>
void accept (int arr[], int size)
{
    printf("Enter elements in sorted order = ");
    for (int i=0; i<size; i++){
    scanf("%d",&arr[i]);
    }
}
void display (int arr[], int size)
{
    for (int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
}
int binarysearch(int arr[], int size, int element)
{
   int low=0;
   int high=size-1;
   while(low<high){
   int mid = (low+high)/2;
   if(arr[mid]==element){
       return mid;
   }
   else if(arr[mid]>element){
       high=mid-1;
   }
   else{
       low=mid+1;
   }
  }
  return -1;
}
int main ()
{
   int arr[100], element, size;
   printf("Enter the size of array = ");
   scanf("%d",&size);
   accept ( arr,  size);
   printf("Array is = ");
   display(arr, size);
   printf("\n");
   printf("Enter the element you want to search =");
   scanf("%d",&element);
   int i=binarysearch ( arr,  size,  element);
      if (i==-1){
       printf("Element not found");
   }
   else{
       printf("Element is in %d place ",i+1);
   }
}









