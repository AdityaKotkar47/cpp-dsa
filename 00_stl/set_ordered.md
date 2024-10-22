## sets

- sorted collection of unique elements
- uses balanced binary tree
- efficient in insertion, deletion, and search


### initializations:

- `set<DataType> s` - creates an empty set
- `set<DataType> s(begin_iterator, end_iterator)` - creates a set from a range of elements specified by iterators
- `set<DataType> s(initializer_list<DataType>)` - creates a set with elements from an initializer list


### access members:

- `s.find(value)` - returns an iterator to the element, or `s.end()` if not found


### operations:

- `s.insert(value)` - adds an element to the set
- `s.emplace(value)` - constructs an element and adds it to the set
- `s.count(value)` - returns the number of occurrences of `value` [returns `0` if not found, `1` otherwise]
- `s.erase(value)` - removes an element from the set and returns an iterator following the last removed element
- `s.erase(iterator)` - removes an element from the set and returns an iterator following the last removed element
- `s.erase(it1, it2)` - removes a range of elements from the set `[it1, it2)`
- `s.clear()` - removes all elements from the set
- `s.size()` - returns the number of elements in the set
- `s.empty()` - checks if the set is empty
- `s.upper_bound(value)` - returns an iterator to the first element that is greater than or equal to `value`
- `s.lower_bound(value)` - returns an iterator to the first element that is greater than `value`

- other functions are similar to other standard containers including but not limited to: `begin()`, `end()`, `rbegin()`, `rend()`, `swap()`, and range-based for loops.
