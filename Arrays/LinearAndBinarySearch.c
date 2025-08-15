#include <stdio.h>
void accept (int arr[], int size)
{
    printf("Enter elements = ");
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
int linearsearch (int arr[], int size, int element)
{
    for (int i=0; i<size; i++){
        if (arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main ()
{
   int arr[100], element, size, choice;
   printf("Enter the size of array = ");
   scanf("%d",&size);
   printf("\n");
   printf("1) Linear Search\n");
   printf("2) Binary Search\n");
   printf("Enter the option = ");
   scanf("%d",&choice);
   switch (choice)
   {
      case 1:
         
         accept ( arr,  size);
         printf("Array is = ");
         display(arr, size);
         printf("\n");
         printf("Enter the element you want to search =");
         scanf("%d",&element);
         int i=linearsearch( arr, size, element);
            if (i==-1){
              printf("Element not found");
   }
            else{
              printf("Element is in %d place ",i+1);
   }
   break;
     case 2: 
        printf("Enter sorted array ");
        accept ( arr,  size);
        printf("Array is = ");
        display(arr, size);
        printf("\n");
           printf("Enter the element you want to search =");
           scanf("%d",&element);
           int j=binarysearch( arr, size, element);
            if (j==-1){
              printf("Element not found");
                      }
            else{
              printf("Element is in %d place ",j+1);
                }
                break;
      
   }

}









