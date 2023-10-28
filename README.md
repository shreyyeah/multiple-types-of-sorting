# sorting-in-cpp
Sorting is the act of placing elements inside a data structure, such as an array, vector, or other container, in a certain order. Making it simpler to locate and retrieve pieces inside the data structure is the aim of sorting.
Several types of sortng are mentioned be,ow-

-BUBBLE SORT: Bubble sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.
Start at the beginning of the list.

Compare the first two elements. If the first element is larger than the second element, swap them.

Move to the next pair of elements (i.e., the second and third elements) and compare them. Again, swap if they are in the wrong order.

Continue this process for the entire list, comparing and swapping adjacent elements as needed.

After one pass through the list, the largest element has "bubbled up" to the end of the list.

Repeat the process for the remaining elements, excluding the last (already sorted) element.

Continue these passes through the list until no swaps are needed.

-INSERTION SORT- builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

Start with the second element (index 1) in the array.

Compare the second element with the first element. If the second element is smaller, swap them to put the smaller element in its correct position within the sorted part of the array.

Move to the third element (index 2) and compare it with the elements in the sorted part of the array. Insert the third element in its correct position within the sorted part by shifting the larger elements to the right.

Repeat this process for all elements in the array, incrementing the size of the sorted part of the array in each iteration.

-SELECTION SORT- sorts an array by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning. 

Initially, the entire list is considered unsorted, and the sorted part is empty.

Find the minimum element in the unsorted part of the list.

Swap the minimum element with the first element in the unsorted part to move it to the end of the sorted part.

Expand the sorted part by one element, and shrink the unsorted part by one element.

Repeat the steps above until the unsorted part becomes empty and the sorted part contains all elements in the correct order.
