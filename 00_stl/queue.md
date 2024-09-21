## queue

- dynamic array
- FIFO [first in, first out] data structure
- efficient for adding elements at the back and removing elements from the front


### initializations:

- `queue<DataType> q` - creates an empty queue
- `queue<DataType> q(lst)` - creates a queue from a list or vector


### access members:

- `q.front()` - accesses the front element (without removing it)
- `q.back()` - accesses the back element (without removing it)
- `q.empty()` - checks if the queue is empty
- `q.size()` - returns the number of elements in the queue


### operations:

- `q.push(value)` - adds an element to the back of the queue
- `q.emplace(value)` - constructs an element and inserts it at the back of the queue
- `q.pop()` - removes the front element from the queue (if not empty)
