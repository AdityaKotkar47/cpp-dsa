## list

- uses doubly linked list
- efficient in insertion and deletion


### initializations:

- `list<DataType> lst` - creates an empty list
- `list<DataType> lst(size)` - creates a list with `size` elements
- `list<DataType> lst(size, value)` - creates a list with `size` elements, each initialized to `value`
- `list<DataType> lst(lst2)` - creates a list with the same elements as `lst2`
- `list<DataType> lst(begin_iterator, end_iterator)` - creates a list from a range of elements specified by iterators


### access members:

- direct access
    - `lst.front()` - accesses the first element
    - `lst.back()` - accesses the last element
- iterators 
    - `list<DataType>::iterator it = lst.begin();` - initializes an iterator
    - `while (it != lst.end())` - loops through the list elements


### operations:

- `lst.push_back(value)` - adds an element to the end of the list
- `lst.emplace_back(value)` - adds an element to the end of the list
- `lst.push_front(value)` - adds an element to the beginning of the list
- `lst.emplace_front(value)` - adds an element to the beginning of the list
- `lst.pop_front()` - removes and returns the first element from the list
- `lst.pop_back()` - removes and returns the last element from the list

- other functions are similar to vectors including but not limited to: `begin()`, `end()`, `rbegin()`, `rend()`, `size()`, `empty()`, `clear()`, `swap()`, `resize()`, `shrink_to_fit()`
