Stacks are LIFO data-types implemented by using an array or linked-list. Avoid list due to memory reallocation issues. Then the two main options are:

```Python
if(threading)
	from queue import LifoQueue 
else
	from collections import deque
```
[Source](https://realpython.com/how-to-implement-python-stack/#what-is-a-stack)