#include <stdio.h>
void accept(int arr[], int size)
{
    printf("Enter the elements = ");
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
int deletion(int arr[], int size, int position)
{
   for (int i=position-1; i<size-1; i++){
       arr[i]=arr[i+1];
   }
   return size-1;
}
int main ()
{
    int arr[100];
    int size;
    int element;
    int position;
    int choice;
    printf("Enter size = ");
    scanf("%d",&size);
    accept(arr, size);
    printf("the array is = ");
    display(arr, size);
    printf("\n");
    printf("Enter the position you want to delete the element=");
    scanf("%d",&position);
    size = deletion(arr,size,position);
    printf("Array is = ");
    display(arr, size);

        
        
}







