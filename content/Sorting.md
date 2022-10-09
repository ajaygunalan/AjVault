def isValidSubsequence(array, sequence):
    seqIdx = 0;
    for value in array:
        if sequence[seqIdx] == value:
            seqIdx += 1
        if seqIdx == len(sequence):
            break
    return seqIdx == len(sequence)

array = [5, 1, 22, 25, 6, -1, 8, 10]
sequence = [1, 6, -1, 10]
print "Array is :", array, "\n sequence is :", sequence
print "Is it a valid Subsequence: ", isValidSubsequence(array, sequence)
---
title: "Sorting"
---


### Concepts


### Easy
[[bubbleSort]], [[insertionSort]], [[selectionSort]]

<script defer src="https://cdn.commento.io/js/commento.js"></script>
<div id="commento"></div>