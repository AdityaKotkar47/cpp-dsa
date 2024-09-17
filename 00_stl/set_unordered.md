## unordered_set

- unordered collection of unique elements
- uses hash table
- efficient in insertion, deletion, and search [average O(1) time complexity, worst O(n) time complexity]
- same as set but without lower and upper bound


### initializations:

- `unordered_set<DataType> us` - creates an empty unordered set
- `unordered_set<DataType> us(begin_iterator, end_iterator)` - creates an unordered set from a range of elements specified by iterators
- `unordered_set<DataType> us(initializer_list<DataType>)` - creates an unordered set with elements from an initializer list


### access members:

- same as set
    - `us.count(value)` - returns the number of occurrences of `value`
    - `us.find(value)` - returns an iterator to the element, or `us.end()` if not found


### operations:

- `us.insert(value)` - adds an element to the unordered set
- `us.emplace(value)` - constructs an element and adds it to the unordered set
- `us.erase(value)` - removes an element from the unordered set
- `us.erase(iterator)` - removes an element from the unordered set
- `us.clear()` - removes all elements from the unordered set
- `us.size()` - returns the number of elements in the unordered set
- `us.empty()` - checks if the unordered set is empty

- other functions are similar to other standard containers including but not limited to: `begin()`, `end()`, `rbegin()`, `rend()`, `swap()`, and range-based for loops
