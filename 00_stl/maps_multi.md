## multimap

- sorted associative container that stores elements in key-value pairs, allowing duplicate keys
- uses balanced binary search tree
- efficient in insertion, deletion, and search [average O(log n) time complexity]


### initializations:

- `multimap<KeyType, ValueType> mm` - creates an empty multimap
- `multimap<KeyType, ValueType> mm(begin_iterator, end_iterator)` - creates a multimap from a range of key-value pairs specified by iterators
- `multimap<KeyType, ValueType> mm(initializer_list<pair<KeyType, ValueType>>)` - creates a multimap with elements from an initializer list


### access members:

- `mm[key]` - cannot be used with `multimap`
- same as map
    - `mm.find(key)` - returns an iterator to the first element with the given `key`, or `mm.end()` if not found
    - `mm.count(key)` - returns the number of elements with the given `key`

### operations:

- `mm.insert(make_pair(key, value))` - adds a new key-value pair to the multimap
- `mm.emplace(key, value)` - constructs and adds a new key-value pair to the multimap
- `mm.erase(key)` - removes all elements associated with the given `key` and returns an iterator following the last removed element
- `mm.erase(iterator)` - removes the element at the position pointed to by the iterator and returns an iterator following the last removed element
- `mm.erase(it1, it2)` - removes a range of elements from the multimap `[it1, it2)` and returns an iterator following the last removed element
- `mm.clear()` - removes all elements from the multimap
- `mm.size()` - returns the number of elements in the multimap
- `mm.empty()` - checks if the multimap is empty
- `mm.lower_bound(key)` - returns an iterator to the first element that is not less than (`>=`) `key`
- `mm.upper_bound(key)` - returns an iterator to the first element that is greater than (`>`) `key`
- `mm.equal_range(key)` - returns a pair of iterators representing the range of elements with the given `key`


### example usage:

```cpp
#include <iostream>
#include <multimap>
using namespace std;

int main() {
    multimap<string, int> grades;

    // Inserting elements
    grades.insert(make_pair("Alice", 90));
    grades.emplace("Bob", 85);
    grades.emplace("Charlie", 92);
    grades.emplace("Bob", 88);

    // Accessing elements
    auto range = grades.equal_range("Bob");
    for (auto it = range.first; it != range.second; ++it) {
        cout << "Bob's grades: " << it->second << endl;
    }

    return 0;
}
```
