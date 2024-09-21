## deque

- dynamic array
- uses linked deque and contiguous memory
- efficient in both random access and insertion/deletion at the beginning or end


### initializations:

- `deque<DataType> dq` - creates an empty deque
- `deque<DataType> dq(size)` - creates a deque with `size` elements
- `deque<DataType> dq(size, value)` - creates a deque with `size` elements, each initialized to `value`
- `deque<DataType> dq(dq2)` - creates a deque with the same elements as `dq2`
- `deque<DataType> dq(begin_iterator, end_iterator)` - creates a deque from a range of elements specified by iterators


### access members:

- direct access
    - `vec[index]` - accesses the element at `index`
    - `vec.at(index)` - accesses the element at `index` with bounds checking
- iterators 
    - `deque<DataType>::iterator it = dq.begin();` - initializes an iterator
    - `while (it != dq.end())` - loops through the deque elements


### operations:

- `dq.push_back(value)` - adds an element to the end of the deque
- `dq.emplace_back(value)` - adds an element to the end of the deque
- `dq.push_front(value)` - adds an element to the beginning of the deque
- `dq.emplace_front(value)` - adds an element to the beginning of the deque
- `dq.pop_front()` - removes the first element from the deque
- `dq.pop_back()` - removes the last element from the deque

- other functions are similar to vectors including but not limited to: `begin()`, `end()`, `rbegin()`, `rend()`, `size()`, `empty()`, `clear()`, `swap()`, `resize()`, `shrink_to_fit()`
