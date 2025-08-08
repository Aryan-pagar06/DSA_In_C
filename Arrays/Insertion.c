#include <stdio.h>
void accept(int arr[], int size)
{
    printf("Enter the elements = ");
    for (int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display (int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
}
int insertion(int arr[], int size, int element, int position)
{
    if (position>size+1)
    {
        printf("Cannot insert\n");
        return size;
    }
    for (int i= size-1; i>=position-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position-1]=element;
    return size+1;
}
int main ()
{
    int arr[100];
    int size;
    int element;
    int position;
    printf("Enter size = ");
    scanf("%d",&size);
    accept(arr, size);
    printf("the array is = ");
    display(arr, size);
    printf("\n");
    printf("Enter the element you want to insert = ");
    scanf("%d",&element);
    printf("Enter the position in which you want the element to be in = ");
    scanf("%d",&position);
    size = insertion(arr, size, element, position);
    printf("Array is =");
    display(arr, size);
}






