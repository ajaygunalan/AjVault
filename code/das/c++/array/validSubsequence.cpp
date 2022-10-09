#include <iostream>
#include <vector>

bool isValidSubsequence(std::vector<int> array, std::vector<int> sequence) {
  	int seqIdx = 0;
  	for (auto& value:array) {
    	if(sequence[seqIdx] == value)
    		seqIdx++;
    	if(seqIdx == sequence.size())
    		break;
	}
	return seqIdx == sequence.size();
}

int main(){
	std::vector<int> array	= {5, 1, 22, 25, 6, -1, 8, 10};
	std::vector<int> sequence = {1, 6, -1, 10};
	std::cout<<"Array is : ";
	for (auto& value:array) {
    	std::cout<<value<<", ";

	}
	std::cout<<"\nSequence is : ";
	for (auto& value:sequence) {
    	std::cout<<value<<", ";

	}
	if(isValidSubsequence(array, sequence)) 
		std::cout<<"\nIs it a valid Subsequence: True"<<std::endl;
	else 
		std::cout<<"\nIs it a valid Subsequence: False"<<std::endl;
	
}
