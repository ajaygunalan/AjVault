Stacks are LIFO data types implemented by using an [[DSA/Arrays]] or [[DSA/Linked List]]. Avoid arrays due to memory reallocation issues. [ref](https://realpython.com/how-to-implement-python-stack/#what-is-a-stack)

Then, the two main options in  `python` are: [ref](https://realpython.com/how-to-implement-python-stack/#what-is-a-stack)
```Python
if(threading)
	from queue import LifoQueue 
else
	from collections import deque
```


