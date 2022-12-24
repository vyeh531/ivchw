/*********************************************************
* AUTHOR		: Vivian Yeh
* Extra Credit	: Sorting
* CLASS			: CS1C
* SECTION		: TTh 12:30pm ¡V 01:45pm
* Due Date		: 05/21/2021
*********************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;
/**********************************************************
*
* Sorting
*
*_________________________________________________________
* This program uses different algorithms to sort the array
* into ascending order
*_________________________________________________________
* INPUT:
* list1 : An array stores 1 - 100 in ascending order
* list2 : An array stores 1 - 100 in decending order
* list3 : An array stores 1 - 100 in random order
*
* OUTPUT:
* The three arrays in ascending order
**********************************************************/

void initialList(int list1[], int list2[], int list3[]);
void printFirstTen(int list[]);
void printLastTen(int list[]);
int bubbleSort(int arr[], int& bubble_compare);
int insertionSort(int arr[], int& insertion_compare);
int selectionSort(int arr[], int& selection_compare);
void swap(int* a, int* b);
int partition(int arr[], int low, int high, int& quick_compare, int& counter);
int quickSort(int arr[], int low, int high, int& quick_compare, int& counter);
void merge(int arr[], int l, int m, int r, int& merge_compare, int& counter);
int mergeSort(int arr[], int l, int r, int& merge_compare, int& counter);

int main() 
{
	cout << "*****************************************\n";
	cout << " Programmed by	: Vivian Yeh\n";
	cout << " Student ID	: 1154474\n";
	cout << " CS1C			: TTh 12:30pm ¡V 01:45pm\n";
	cout << " Extra Credit	: Sorting\n";
	cout << "*****************************************\n";

	int list1[100];		// declare an array stores 1 - 100 in ascending order
	int list2[100];		// declare an array stores 1 - 100 in decending order
	int list3[100];		// declare an array stores 1 - 100 in random order

	int bubble_compare = 0;		// number of comparisons of bubble sort
	int insertion_compare = 0;	// number of comparisons of insertion sort
	int selection_compare = 0;	// number of comparisons of selection sort
	int quick_compare = 0;		// number of comparisons of quick sort
	int merge_compare = 0;		// number of comparisons of merge sort

	int bubble_assign = 0;		// number of tem assignments of bubble sort
	int insertion_assign = 0;	// number of tem assignments of insertion sort
	int selection_assign = 0;	// number of tem assignments of selection sort
	int quick_assign = 0;		// number of tem assignments of quick sort
	int merge_assign = 0;		// number of tem assignments of merge sort
	
	initialList(list1, list2, list3);

	//a.Print out the first and last 10 array entries of list1, list2,
	//	and list3 before sorting.Also print out the firstand last 10
	//	array entries after each sort
	// (bubble, insertion, selection, quick, merge).
	//b.Output the number of comparisons and item assignments
	//	made during each sort.There should be 15 entries.
	//c.Output the execution time in nanoseconds for each sort.
	//	There should be 15 entries.
	 
	//	Bubble Sorting
	cout << "Apply Bubble Sorting algorithm to each list:\n\n";
	cout << "Print out the first 10 array entries of list1 before sorting:\n";
	printFirstTen(list1);
	cout << "\nPrint out the last 10 array entries of list1 before sorting:\n";
	printLastTen(list1);
	cout << "\nApply Bubble Sort:\n";
	bubble_assign = bubbleSort(list1, bubble_compare);
	cout << "Print out the first 10 array entries of list1 after sorting:\n";
	printFirstTen(list1);
	cout << "\nPrint out the last 10 array entries of list1 after sorting:\n";
	printLastTen(list1);
	cout << "\n\nThe number of comparisons made during bubble sort is: " << bubble_compare;
	cout << "\nThe number of item assignments made during bubble sort is: " << bubble_assign;
	cout << "\n=============================================================================\n";

	cout << "\nPrint out the first 10 array entries of list2 before sorting:\n";
	printFirstTen(list2);
	cout << "\nPrint out the last 10 array entries of list2 before sorting:\n";
	printLastTen(list2);
	cout << "\nApply Bubble Sort:\n";
	bubble_assign = bubbleSort(list2, bubble_compare);
	cout << "Print out the first 10 array entries of list2 after sorting:\n";
	printFirstTen(list2);
	cout << "\nPrint out the last 10 array entries of list2 after sorting:\n";
	printLastTen(list2);
	cout << "\n\nThe number of comparisons made during bubble sort is: " << bubble_compare;
	cout << "\nThe number of item assignments made during bubble sort is: " << bubble_assign;
	cout << "\n=============================================================================\n";

	cout << "\nPrint out the first 10 array entries of list3 before sorting:\n";
	printFirstTen(list3);
	cout << "\nPrint out the last 10 array entries of list3 before sorting:\n";
	printLastTen(list3);
	cout << "\nApply Bubble Sort:\n";
	bubble_assign = bubbleSort(list3, bubble_compare);
	cout << "Print out the first 10 array entries of list3 after sorting:\n";
	printFirstTen(list3);
	cout << "\nPrint out the last 10 array entries of list3 after sorting:\n";
	printLastTen(list3);
	cout << "\n\nThe number of comparisons made during bubble sort is: " << bubble_compare;
	cout << "\nThe number of item assignments made during bubble sort is: " << bubble_assign;
	cout << "\n=============================================================================\n";

	initialList(list1, list2, list3);	// initialize the three lists

	//	Insertion Sorting
	cout << "Apply Insertion Sorting algorithm to each list:\n\n";
	cout << "Print out the first 10 array entries of list1 before sorting:\n";
	printFirstTen(list1);
	cout << "\nPrint out the last 10 array entries of list1 before sorting:\n";
	printLastTen(list1);
	cout << "\nApply Insertion Sort:\n";
	insertion_assign = insertionSort(list1, insertion_compare);
	cout << "Print out the first 10 array entries of list1 after sorting:\n";
	printFirstTen(list1);
	cout << "\nPrint out the last 10 array entries of list1 after sorting:\n";
	printLastTen(list1);
	cout << "\n\nThe number of comparisons made during insertion sort is: " << insertion_compare;
	cout << "\nThe number of item assignments made during insertion sort is: " << insertion_assign;
	cout << "\n=============================================================================\n";

	cout << "\nPrint out the first 10 array entries of list2 before sorting:\n";
	printFirstTen(list2);
	cout << "\nPrint out the last 10 array entries of list2 before sorting:\n";
	printLastTen(list2);
	cout << "\nApply Insertion Sort:\n";
	insertion_assign = insertionSort(list2, insertion_compare);
	cout << "Print out the first 10 array entries of list2 after sorting:\n";
	printFirstTen(list2);
	cout << "\nPrint out the last 10 array entries of list2 after sorting:\n";
	printLastTen(list2);
	cout << "\n\nThe number of comparisons made during insertion sort is: " << insertion_compare;
	cout << "\nThe number of item assignments made during insertion sort is: " << insertion_assign;
	cout << "\n=============================================================================\n";

	cout << "\nPrint out the first 10 array entries of list3 before sorting:\n";
	printFirstTen(list3);
	cout << "\nPrint out the last 10 array entries of list3 before sorting:\n";
	printLastTen(list3);
	cout << "\nApply Insertion Sort:\n";
	insertion_assign = insertionSort(list3, insertion_compare);
	cout << "Print out the first 10 array entries of list3 after sorting:\n";
	printFirstTen(list3);
	cout << "\nPrint out the last 10 array entries of list3 after sorting:\n";
	printLastTen(list3);
	cout << "\n\nThe number of comparisons made during insertion sort is: " << insertion_compare;
	cout << "\nThe number of item assignments made during insertion sort is: " << insertion_assign;
	cout << "\n=============================================================================\n";

	initialList(list1, list2, list3);	// initialize the three lists

	//	Selection Sorting
	cout << "Apply Selection Sorting algorithm to each list:\n\n";
	cout << "Print out the first 10 array entries of list1 before sorting:\n";
	printFirstTen(list1);
	cout << "\nPrint out the last 10 array entries of list1 before sorting:\n";
	printLastTen(list1);
	cout << "\nApply Selection Sort:\n";
	selection_assign = selectionSort(list1, selection_compare);
	cout << "Print out the first 10 array entries of list1 after sorting:\n";
	printFirstTen(list1);
	cout << "\nPrint out the last 10 array entries of list1 after sorting:\n";
	printLastTen(list1);
	cout << "\n\nThe number of comparisons made during selection sort is: " << selection_compare;
	cout << "\nThe number of item assignments made during selection sort is: " << selection_assign;
	cout << "\n=============================================================================\n";

	cout << "\nPrint out the first 10 array entries of list2 before sorting:\n";
	printFirstTen(list2);
	cout << "\nPrint out the last 10 array entries of list2 before sorting:\n";
	printLastTen(list2);
	cout << "\nApply Selection Sort:\n";
	selection_assign = selectionSort(list2, selection_compare);
	cout << "Print out the first 10 array entries of list2 after sorting:\n";
	printFirstTen(list2);
	cout << "\nPrint out the last 10 array entries of list2 after sorting:\n";
	printLastTen(list2);
	cout << "\n\nThe number of comparisons made during selection sort is: " << selection_compare;
	cout << "\nThe number of item assignments made during selection sort is: " << selection_assign;
	cout << "\n=============================================================================\n";

	cout << "\nPrint out the first 10 array entries of list3 before sorting:\n";
	printFirstTen(list3);
	cout << "\nPrint out the last 10 array entries of list3 before sorting:\n";
	printLastTen(list3);
	cout << "\nApply Selection Sort:\n";
	selection_assign = selectionSort(list3, selection_compare);
	cout << "Print out the first 10 array entries of list3 after sorting:\n";
	printFirstTen(list3);
	cout << "\nPrint out the last 10 array entries of list3 after sorting:\n";
	printLastTen(list3);
	cout << "\n\nThe number of comparisons made during selection sort is: " << selection_compare;
	cout << "\nThe number of item assignments made during selection sort is: " << selection_assign;
	cout << "\n=============================================================================\n";

	initialList(list1, list2, list3);	// initialize the three lists

	//	Quick Sorting
	cout << "Apply Quick Sorting algorithm to each list:\n\n";
	cout << "Print out the first 10 array entries of list1 before sorting:\n";
	printFirstTen(list1);
	cout << "\nPrint out the last 10 array entries of list1 before sorting:\n";
	printLastTen(list1);
	cout << "\nApply Quick Sort:\n";
	quick_compare = 0;
	int counter = 0;
	quick_assign = quickSort(list1, 0, 99, quick_compare, counter);
	cout << "Print out the first 10 array entries of list1 after sorting:\n";
	printFirstTen(list1);
	cout << "\nPrint out the last 10 array entries of list1 after sorting:\n";
	printLastTen(list1);
	cout << "\n\nThe number of comparisons made during quick sort is: " << quick_compare;
	cout << "\nThe number of item assignments made during quick sort is: " << quick_assign;
	cout << "\n=============================================================================\n";

	cout << "\nPrint out the first 10 array entries of list2 before sorting:\n";
	printFirstTen(list2);
	cout << "\nPrint out the last 10 array entries of list2 before sorting:\n";
	printLastTen(list2);
	cout << "\nApply Quick Sort:\n";
	quick_compare = 0;
	counter = 0;
	quick_assign = quickSort(list2, 0, 99, quick_compare, counter);
	cout << "Print out the first 10 array entries of list2 after sorting:\n";
	printFirstTen(list2);
	cout << "\nPrint out the last 10 array entries of list2 after sorting:\n";
	printLastTen(list2);
	cout << "\n\nThe number of comparisons made during quick sort is: " << quick_compare;
	cout << "\nThe number of item assignments made during quick sort is: " << quick_assign;
	cout << "\n=============================================================================\n";

	cout << "\nPrint out the first 10 array entries of list3 before sorting:\n";
	printFirstTen(list3);
	cout << "\nPrint out the last 10 array entries of list3 before sorting:\n";
	printLastTen(list3);
	cout << "\nApply Quick Sort:\n";
	quick_compare = 0;
	counter = 0;
	quick_assign = quickSort(list3, 0, 99, quick_compare, counter);
	cout << "Print out the first 10 array entries of list3 after sorting:\n";
	printFirstTen(list3);
	cout << "\nPrint out the last 10 array entries of list3 after sorting:\n";
	printLastTen(list3);
	cout << "\n\nThe number of comparisons made during quick sort is: " << quick_compare;
	cout << "\nThe number of item assignments made during quick sort is: " << quick_assign;
	cout << "\n=============================================================================\n";

	initialList(list1, list2, list3);	// initialize the three lists

	//	Merge Sorting
	cout << "Apply Merge Sorting algorithm to each list:\n\n";
	cout << "Print out the first 10 array entries of list1 before sorting:\n";
	printFirstTen(list1);
	cout << "\nPrint out the last 10 array entries of list1 before sorting:\n";
	printLastTen(list1);
	cout << "\nApply Merge Sort:\n";
	merge_compare = 0;
	counter = 0;
	merge_assign = mergeSort(list1, 0, 99, merge_compare, counter);
	cout << "Print out the first 10 array entries of list1 after sorting:\n";
	printFirstTen(list1);
	cout << "\nPrint out the last 10 array entries of list1 after sorting:\n";
	printLastTen(list1);
	cout << "\n\nThe number of comparisons made during merge sort is: " << merge_compare;
	cout << "\nThe number of item assignments made during merge sort is: " << merge_assign;
	cout << "\n=============================================================================\n";

	cout << "\nPrint out the first 10 array entries of list2 before sorting:\n";
	printFirstTen(list2);
	cout << "\nPrint out the last 10 array entries of list2 before sorting:\n";
	printLastTen(list2);
	cout << "\nApply Merge Sort:\n";
	merge_compare = 0;
	counter = 0;
	merge_assign = mergeSort(list2, 0, 99, merge_compare, counter);
	cout << "Print out the first 10 array entries of list2 after sorting:\n";
	printFirstTen(list2);
	cout << "\nPrint out the last 10 array entries of list2 after sorting:\n";
	printLastTen(list2);
	cout << "\n\nThe number of comparisons made during merge sort is: " << merge_compare;
	cout << "\nThe number of item assignments made during merge sort is: " << merge_assign;
	cout << "\n=============================================================================\n";

	cout << "\nPrint out the first 10 array entries of list3 before sorting:\n";
	printFirstTen(list3);
	cout << "\nPrint out the last 10 array entries of list3 before sorting:\n";
	printLastTen(list3);
	cout << "\nApply Merge Sort:\n";
	merge_compare = 0;
	counter = 0;
	merge_assign = mergeSort(list3, 0, 99, merge_compare, counter);
	cout << "Print out the first 10 array entries of list3 after sorting:\n";
	printFirstTen(list3);
	cout << "\nPrint out the last 10 array entries of list3 after sorting:\n";
	printLastTen(list3);
	cout << "\n\nThe number of comparisons made during merge sort is: " << merge_compare;
	cout << "\nThe number of item assignments made during merge sort is: " << merge_assign;;
	cout << "\n=============================================================================\n";

	cout << "\nProfessor Kath, Thank you for your teach and your help.\n"
		<< "Thank you for picking me answers for many class questions because that keeps me awake.\n"
		<< "Even though I don't answer very well, you praised me to show my work.\n"
		<< "For this last assignment (extra credit), unfortunaely I couldn't figure out how to fix\n"
		<< "some errors of my list3 after sorting, but I have tried very hard.\n"
		<< "I wish I cound thank you in person, thank you again for everything!!!\n\n";

	// INPUT:	Three arrays with different sorting order(ascending, decending, random) for 
	//			testing the sorting function.
	// 
	// PROCESSING:	Test the bubble sort, insertion sort, selection sort, quick sort, and merge sort.
	//				Calculate the number of comparisons and item assignments made during each sort.
	//
	// OUTPUT:		The first and last 10 array entries of each list before and after sorting bubble 
	//				sort, insertion sort, selection sort, quick sort, and merge sort.
	//				Output the number of comparisons and item assignments made during each sort.

	return 0;
}

void initialList(int list1[], int list2[], int list3[])		// initialize the three arrays 
{
	for (int i = 0; i < 100; ++i) {
		list1[i] = i + 1;
	}

	for (int i = 0; i < 100; ++i) {
		list2[i] = 100 - i;
	}
	for (int i = 0; i < 100; i++)
		list3[i] = rand() % 100 + 1;
}

void printFirstTen(int list[])		// print out the first 10 array entries
{
	for (int i = 0; i < 10; i++)	
	{
		cout << list[i] << "\t";
	}
}

void printLastTen(int list[])		// print out the last 10 array entries
{
	for (int i = 90; i < 100; i++)	
	{
		cout << list[i] << "\t";
	}
}

int bubbleSort(int arr[], int& bubble_compare)		// bubble sort
{
	int counter = 0;
	bubble_compare = 0;
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100 - 1; j++)
		{
			bubble_compare++;
			if (arr[j] > arr[j + 1])
			{
				counter++;
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return counter;
}

int insertionSort(int arr[], int& insertion_compare)	// insertion sort
{
	int counter = 0;
	insertion_compare = 0;
	int j, temp;

	for (int i = 0; i < 100; i++)
	{
		insertion_compare++;
		j = i;
		while (j > 0 && arr[j] < arr[j - 1])
		{
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
			insertion_compare++;
			counter++;
		}
	}
	return counter;
}

int selectionSort(int arr[], int& selection_compare)	// selection sort
{
	int counter = 0;
	selection_compare = 0;
	for (int i = 0; i < 100; i++)
	{
		int index_of_min = i;
		for (int j = i; j < 100; j++)
		{
			selection_compare++;
			if (arr[index_of_min] > arr[j])
			{
				index_of_min = j;
				counter++;
			}
		}
		int temp = arr[i];
		arr[i] = arr[index_of_min];
		arr[index_of_min] = temp;
	}
	return counter;
}

void swap(int* a, int* b)	// swap the two numbers
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int low, int high, int& quick_compare, int& counter)	// partition function for quick sort
{
	int pivot = arr[high]; // pivot
	int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than the pivot
		quick_compare++;
		if (arr[j] < pivot)
		{
			i++; // increment index of smaller element
			swap(&arr[i], &arr[j]);
			counter++;
		}
	}
	swap(&arr[i + 1], &arr[high]);
	counter++;
	return (i + 1);
}

int quickSort(int arr[], int low, int high, int& quick_compare, int& counter) // quick sort
{
	quick_compare++;
	if (low < high)
	{
		counter++;
		int pi = partition(arr, low, high, quick_compare, counter);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1, quick_compare, counter);
		quickSort(arr, pi + 1, high, quick_compare, counter);
	}
	return counter;
}

void merge(int arr[], int l, int m, int r, int &merge_compare, int &counter)	// merge function for merge sort
{
	int n1 = m - l + 1;
	int n2 = r - m;

	// Create temp arrays
	int *L = new int [n1];
	int *R = new int [n2];

	// Copy data to temp arrays L[] and R[]
	for (int i = 0; i < n1; i++)
	{
		L[i] = arr[l + i];
		counter++;
	}

	for (int j = 0; j < n2; j++)
	{
		R[j] = arr[m + 1 + j];
		counter++;
	}

	// Merge the temp arrays back into arr[l..r]

	// Initial index of first subarray
	int i = 0;

	// Initial index of second subarray
	int j = 0;

	// Initial index of merged subarray
	int k = l;

	while (i < n1 && j < n2) {
		merge_compare++;
		if (L[i] <= R[j]) {
			counter++;
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			counter++;
			j++;
		}
		k++;
	}

	// Copy the remaining elements of
	// L[], if there are any
	while (i < n1) {
		merge_compare++;
		counter++;
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of
	// R[], if there are any
	while (j < n2) {
		merge_compare++;
		counter++;
		arr[k] = R[j];
		j++;
		k++;
	}
}

// l is for left index and r is
// right index of the sub-array
// of arr to be sorted 
int mergeSort(int arr[], int l, int r, int& merge_compare, int& counter)	// merge sort
{
	merge_compare++;
	if (l >= r) {
		return counter;//returns recursively
	}
	int m = l + (r - l) / 2;
	counter++;
	mergeSort(arr, l, m, merge_compare, counter);
	mergeSort(arr, m + 1, r, merge_compare, counter);
	merge(arr, l, m, r, merge_compare, counter);

	return counter;
	
}
