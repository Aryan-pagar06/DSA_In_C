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
int insertion(int arr[], int size, int element, int position)
{
    if (position>size+1){
        printf("Cannot insert\n");
        return size;
    }
    for (int i= size-1; i>=position-1; i--){
        arr[i+1]=arr[i];
    }
    arr[position-1]=element;
    return size+1;
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
    printf("1. Insertion\n2. Deletion\n");
    printf("Enter your choice = ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1: 
        printf("Enter the element you want to insert = ");
        scanf("%d",&element);
        printf("Enter the position you want to insert the element=");
        scanf("%d",&position);
        size = insertion(arr,size,element,position);
        printf("Array is = ");
        display(arr, size);
        break;
        case 2:
        printf("Enter the position you want to delete the element=");
        scanf("%d",&position);
        size = deletion(arr,size,position);
        printf("Array is = ");
        display(arr, size);
        break;  
        default:
        printf("Please enter a valid option");
        break;
        
        
    }
}






