Stacks are LIFO data types implemented by using an [[DSA/Arrays]] or [[DSA/Linked List]]. Avoid arrays due to memory reallocation issues. 

Then, the two main options in  `python` are [Ref: python-stack](https://realpython.com/how-to-implement-python-stack/#what-is-a-stack):
```Python
if(threading)
	from queue import LifoQueue 
else
	from collections import deque
```
