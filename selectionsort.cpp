//22070123114
//selection-sorting-in-cpp
#include <iostream>
using namespace std;

/* function to swap the the position of two elements*/
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

/* function to print an array*/
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    swap(&array[min_idx], &array[step]);
  }
}


int main() {
  int data[] = {30, 22, 10, 1, 2};//we can take input from the user also
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout << "Sorted array in Ascending Order:\n";
  printArray(data, size);
}