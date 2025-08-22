#include <stdio.h>

void accept (int arr[], int size)
{
    printf("Enter elements = ");
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

int first_occurrence (int arr[], int size, int element)
{
    for (int i=0; i<size-1; i++)
    {
        if(arr[i]==element)
        {
            int first = i;
            return first;
        }
    }
    
}
int last_occurrence (int arr[], int size, int element)
{
    for (int i=size-1; i>=0; i--)
    {
        if(arr[i]==element)
        {
            int last = i;
            return last;
        }
    }
    
}
int main ()
{
   int arr[100], element, size;
   printf("Enter the size of array = ");
   scanf("%d",&size);
   printf("\n");
   accept(arr, size);
   printf("Array is = ");
   display(arr, size);
   printf("\n");
   printf("Enter the element you want =");
   scanf("%d",&element);
   int first=first_occurrence ( arr,  size,  element);
   int last = last_occurrence ( arr,  size,  element);
   printf("First occurrence is = %d",first+1);
   printf("\n");
   printf("Last occurrencce is = %d",last+1);
}







