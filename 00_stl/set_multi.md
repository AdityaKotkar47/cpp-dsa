## multiset

- sorted collection of elements that allows duplicates
- uses balanced binary tree
- efficient in insertion, deletion, and search


### initializations:

- `multiset<DataType> ms` - creates an empty multiset
- `multiset<DataType> ms(begin_iterator, end_iterator)` - creates a multiset from a range of elements specified by iterators
- `multiset<DataType> ms(initializer_list<DataType>)` - creates a multiset with elements from an initializer list


### access members:

- same as set
    - `ms.find(value)` - returns an iterator to the element, or `ms.end()` if not found
    - `ms.count(value)` - returns the number of occurrences of `value`


### operations:

- same as set
- `ms.insert(value)` - adds an element to the multiset (allows duplicates)
- `ms.erase(value)` - removes all instances of an element from the multiset
- `ms.erase(iterator)` - removes an element from the multiset
- `ms.erase(it1, it2)` - removes a range of elements from the multiset `[it1, it2)`
- `ms.clear()` - removes all elements from the multiset
- `ms.size()` - returns the number of elements in the multiset
- `ms.empty()` - checks if the multiset is empty
- `ms.upper_bound(value)` - returns an iterator to the first element that is greater than or equal to `value`
- `ms.lower_bound(value)` - returns an iterator to the first element that is greater than `value`

- other functions are similar to other standard containers including but not limited to: `begin()`, `end()`, `rbegin()`, `rend()`, `swap()`, and range-based for loops
