## priority queue

- a container that stores elements in a specific order determined by a comparison function
- elements are ordered based on their priority, with the highest-priority element at the top


### initializations:

- `priority_queue<DataType> pq` - creates an empty priority queue [default max-heap]
- `priority_queue<DataType, vector<DataType>, greater<DataType>> pq` - creates a priority queue with custom comparison function [min-heap]


### access members:

- `pq.top()` - accesses the top element (highest priority) without removing it


### operations:

- `pq.push(value)` - adds an element to the priority queue
- `pq.emplace(value)` - constructs an element and inserts it into the priority queue
- `pq.pop()` - removes the top element from the priority queue [highest priority in a max-heap, lowest in a min-heap]
- `pq.top()` - returns the top element without removing it
- `pq.empty()` - checks if the priority queue is empty
- `pq.size()` - returns the number of elements in the priority queue
