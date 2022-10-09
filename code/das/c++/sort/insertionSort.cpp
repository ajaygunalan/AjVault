
#include <iostream>
#include <vector>

std::vector<int> insertionSort(std::vector<int> array) {
	for(int i =1; i <= array.size(); i++) {
		int index = i;
		int temp = 0;
		while(array[index-1] > array[index]) {
			temp =  array[i];
			array[index-1] = temp;
			index = index - 1;
		}
	return array;
	}
}

int main(){
	std::vector<int> array	= {68, 3, 5, 12, 14, 8, 9, 4, 2};
	
	std::cout<<"Unsorted array = { ";
	for (auto& value:array) 
    	std::cout<<value<<" ";
    std::cout<<"}"<<std::endl;

    std::vector<int> sorted = insertionSort(array);
	
	
	std::cout<<"Sorted array = { ";
	for (auto& value:sorted)
    	std::cout<<value<<" ";
	std::cout<<"}"<<std::endl;
}



// def insertionSort(arr):
//     for i in range(1, len(arr)):
//         index = i
//         while index > 0 and arr[index - 1] > arr[index]:
//             temp = arr[index]
//             arr[index] = arr[index - 1]
//             arr[index - 1] = temp
//             index = index - 1
//     return arr

// arr = []
// print("Unsorted array is :", arr)
// print("Sorted array is :", insertionSort(arr))