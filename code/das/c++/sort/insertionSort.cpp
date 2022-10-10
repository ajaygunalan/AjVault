#include <iostream>
#include <vector>

std::vector<int> insertionSort(std::vector<int> array) {
	for(int i=1; i <= array.size(); i++) {
		int index = i;
		while((index>0) & (array[index] > array[index-1])) {
		    int temp =  array[index];
		    array[index] = array[index-1];
			array[index-1] = temp;
			index -= 1;
		}
	}
	return array;
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