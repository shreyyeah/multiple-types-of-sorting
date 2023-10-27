//22070123114
//bubblesort in cpp
#include <iostream>
using namespace std;

void swap(int *var1, int *var2)
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}
//function for Bubble Sort.
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
               swap(&arr[j], &arr[j+1]);
}
// Function to print array.
void display(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << "\t";
        
    cout<<endl;
}

int main()
{
    int array[] = {-11,20,4,15,-1};//we can take input from the user also
    int size = sizeof(array)/sizeof(array[0]);
    
    cout<<"Before bubble sort: \n";
    display(array, size);//to print unsorted array.
    
    bubbleSort(array, size);
    
    cout<<"After bubble sort: \n";
    display(array, size);//to print sorted array.
    
    return 0;
}
