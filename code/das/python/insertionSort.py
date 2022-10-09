import pdb

def insertionSort(array):
	for i in range(1, len(array)):
		#pdb.set_trace()
		if (array[i] < array[i-1]):
			pdb.set_trace()
			temp  = array[i-1]
			array[i-1] = array[i]
			array[i] = temp
	return array


array = [68,3,5,12,14,8,9,4,2]
print "Unsorted array is :", array
print "Sorted array is :", insertionSort(array)