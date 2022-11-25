Stacks are LIFO data types implemented by using an [[DSA/Arrays]] or [[DSA/Linked List]]. Avoid arrays due to memory reallocation issues[[#^b2c67a|(1)]].

Then, the two main options in  `python` are [[#^b2c67a|(1)]]:

```Python
if(threading)
	from queue import LifoQueue 
else
	from collections import deque
```


Github repo of stack problems: [Python](https://github.com/ajaygunalan/DSApython/tree/master/stacks)


### Reference



1. [How to Implement a Python Stack](https://realpython.com/how-to-implement-python-stack/#what-is-a-stack) ^b2c67a


