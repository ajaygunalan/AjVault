---
title: "Valid Subsequence"
---


A subsequence is a set of numbers appearing in the same order as the main array. 
Example:
array = [5, 1, 22, 25, 6, -1, 8, 10]
seq = [1, 6, -1, 10]
### Concepts:
[[std-vectors]], 
### Code

C++ 
```
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int seqIdx = 0;
  for (int i=0;  i<array.size(); i++) {
      if(sequence[seqIdx] == array[i])
        seqIdx++;
      if(seqIdx == sequence.size())
        break;
}
  return seqIdx == sequence.size();
}
```

C++ way to iterate by using range-based expression
```
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int seqIdx = 0;
  for (int value:array) {
      if(sequence[seqIdx] == value)
        seqIdx++;
      if(seqIdx == sequence.size())
        break;
}
  return seqIdx == sequence.size();
}
```

However, we need to make it refernce based by adding &
```
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int seqIdx = 0;
  for (int& value:array) {
      if(sequence[seqIdx] == value)
        seqIdx++;
      if(seqIdx == sequence.size())
        break;
}
  return seqIdx == sequence.size();
}
```
Avoid mentioning data type explicitly by using auto.
```
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int seqIdx = 0;
  for (auto& value:array) {
      if(sequence[seqIdx] == value)
        seqIdx++;
      if(seqIdx == sequence.size())
        break;
}
  return seqIdx == sequence.size();
}

```

Python
```
def isValidSubsequence(array, sequence):
    seqIdx = 0;
    for value in array:
        if sequence[seqIdx] == value:
            seqIdx += 1
        if seqIdx == len(sequence):
            break
    return seqIdx == len(sequence)
```

<script defer src="https://cdn.commento.io/js/commento.js"></script>
<div id="commento"></div>