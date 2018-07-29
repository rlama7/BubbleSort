/**
 * @file 		BubbleSort.cpp
 * @author		Ratna Lama
 * @date		07/29/2018
 * @brief 		A program to implement Bubble Sort.
 * 				
 * 
 * @param Array
 * @param size
 * 
 * @algorithm:
 * Bubble Sort orders a list of values by repetitively comparing 
 * neighboring elements and swapping their positions if necessary
 * Keyword:: Highest neighbor --> Final Position
 * 
 * Steps::
 * 1) Scan the list, exchanging adjacent elements if they are not 
 * in relative order; this bubbles the highest value to the top/right.
 * 2) Scan the list again, bubbling up the second highest value.
 * 3) Repeat until all elements have been placed in their proper order.
 * 
 */

#include <iostream>
#include <string>
using namespace std;

// Function Prototype
template<typename ItemType>
void BubbleSort(ItemType Array[], int size);

int main() {
	
	// Sort string using BubbleSort 
	string words[10] = {"kite", "yak", "tiger", "llama", "fish", "joker", "ball", "jelly", "car", "ant"};
	BubbleSort(words, 10);
	cout << "[";
	for (int i=0; i<10; i++) {
		cout << words[i] << " ";
	}
	cout <<"]";
	cout << "\n------------------------------------------------------\n" << endl;
	
	// Sort int using BubbleSort
	int num[15] = {4,8,0,2,1,4,9,6,8,2,6,3,7,5,1};
	BubbleSort(num, 15);
	cout << "[";
	for (auto n : num) {
		cout << n << " ";
	}
	cout << "]";
	
	cout << "\n------------------------------------------------------\n" << endl;
	return 0;
} // end main



// Function
template<typename ItemType>
void BubbleSort(ItemType Array[], int size) {
	bool sorted{false};
	int pass{1};
	
	while (!sorted && (pass < size)) {
		sorted = true;
		
		for (int index = 0; index < size-pass; index++) {
			int nextIndex = index + 1;
			
			if (Array[index] > Array[nextIndex]) {
				swap(Array[index], Array[nextIndex]);
				sorted = false;
			}
		}
		pass++;
	}
} // end BubbleSort()	 