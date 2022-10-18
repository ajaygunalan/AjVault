---
title: "Algorithmic Thinking-Peak Finding"
---


| Explanation | [Jarednielsen Blog](https://jarednielsen.com/big-o-omega-theta/) |
| ----------- | ---------------------------------------------------------------- |
| $O$         | Upper Bound (Worst Case)                                         |
| $\Omega$    | Lower Bound  (Best Case)                                         |
| $\Theta$    | Expected Value (Avg. Case)                                       |





```python
def insertionSort(arr):
	for i in range(1, len(arr)):
		index  = i;
		while index > 0 and arr[index-1] > arr[index]:
			temp = arr[index]
			arr[index] = arr[index-1]
			arr[index-1] = temp;
			index = index-1;
	return arr


arr = [68,3,5,12,14,8,9,4,2]
print "Unsorted array is :", arr
print "Sorted array is :", insertionSort(arr)
```



<script defer src="https://cdn.commento.io/js/commento.js"></script>
<div id="commento"></div>