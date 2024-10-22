## map

- sorted associative container that stores elements in key-value pairs
- uses balanced binary search tree
- efficient in insertion, deletion, and search [average O(log n) time complexity]


### initializations:

- `map<KeyType, ValueType> m` - creates an empty map
- `map<KeyType, ValueType> m(begin_iterator, end_iterator)` - creates a map from a range of key-value pairs specified by iterators
- `map<KeyType, ValueType> m(initializer_list<pair<KeyType, ValueType>>)` - creates a map with elements from an initializer list


### access members:

- direct access
    - `m[key]` - accesses the value associated with `key`, if `key` does not exist, it inserts a new element with the default value for `ValueType`
    - `m.at(key)` - accesses the value associated with `key`, throws an exception if `key` does not exist

- iterators
    - `map<KeyType, ValueType>::iterator it = m.begin();` - initializes an iterator to the first element
    - `map<KeyType, ValueType>::const_iterator cit = m.cbegin();` - initializes a constant iterator to the first element
    - Loop through the map:
        ```cpp
        while (it != m.end()) {
            // Access key-value pair: it->first (key), it->second (value)
        }
        ```

### operations:

-`m[key] = value` - adds a new key-value pair to the map
- `m.insert({key, value})` - adds a new key-value pair to the map, if the key already exists, the insertion is ignored
- `m.insert(make_pair(key, value))` - adds a new key-value pair to the map, if the key already exists, the insertion is ignored
- `m.emplace(key, value)` - constructs and adds a new key-value pair to the map
- `m.erase(key)` - removes the element associated with `key` and returns an iterator following the last removed element
- `m.erase(iterator)` - removes the element at the position pointed to by the iterator and returns an iterator following the last removed element
- `m.erase(it1, it2)` - removes a range of elements from the map `[it1, it2)` and returns an iterator following the last removed element
- `m.clear()` - removes all elements from the map
- `m.size()` - returns the number of elements in the map
- `m.empty()` - checks if the map is empty
- `m.count(key)` - returns the number of occurrences of `key` [0 or 1 for maps]
- `m.find(key)` - returns an iterator to the element associated with `key`, or `m.end()` if not found
- `m.lower_bound(key)` - returns an iterator to the first element that is not less than (`>=`) `key`
- `m.upper_bound(key)` - returns an iterator to the first element that is greater than (`>`) `key`
- `m.key_comp()` - returns a comparison object that compares keys
- `m.value_comp()` - returns a comparison object that compares values
- `m.swap(other_map)` - swaps contents with another map of the same type
- `max_size()` - returns the maximum number of elements that can be stored in the map


### example usage:

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> student;

    // Inserting elements using []
    student[1] = "Alice";
    student[2] = "Bob";

    // Inserting elements using insert()
    student.insert(make_pair(3, "Charlie"));

    // Accessing elements
    cout << "Student ID 1: " << student.at(1) << endl;

    // Iterating through map
    for (const auto& pair : student) {
        cout << "ID: " << pair.first << ", Name: " << pair.second << endl;
    }

    return 0;
}
```
