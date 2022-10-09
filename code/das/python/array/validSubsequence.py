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
print "Array is :", array, "\nSequence is :", sequence
print "Is it a valid Subsequence: ",isValidSubsequence(array, sequence)