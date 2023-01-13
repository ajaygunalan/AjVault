Stacks are LIFO data types implemented by using an arrays or [[Linked List]]. Avoid arrays due to memory reallocation issues[[#^b2c67a]].

### Python

Then, the two main options in  `python` are [[#^b2c67a]]:

```Python
if(threading)
	from queue import LifoQueue 
else
	from collections import deque
```

### C++

use `std::stack`
###  Reference
1. [How to Implement a Python Stack](https://realpython.com/how-to-implement-python-stack/#what-is-a-stack) ^b2c67a


