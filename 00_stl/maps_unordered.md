## unordered_map

- unordered associative container that stores elements in key-value pairs
- uses hash table
- efficient in insertion, deletion, and search [average O(1) time complexity]


### initializations:

- `unordered_map<KeyType, ValueType> um` - creates an empty unordered map
- `unordered_map<KeyType, ValueType> um(begin_iterator, end_iterator)` - creates an unordered map from a range of key-value pairs specified by iterators
- `unordered_map<KeyType, ValueType> um(initializer_list<pair<KeyType, ValueType>>)` - creates an unordered map with elements from an initializer list


### access members:

- same as map
    - `um[key]` - accesses the value associated with `key`, if `key` does not exist, it inserts a new element with the default value for `ValueType`
    - `um.at(key)` - accesses the value associated with `key`, throws an exception if `key` does not exist
    - `um.find(key)` - returns an iterator to the element associated with `key`, or `um.end()` if not found
    - `um.count(key)` - returns the number of occurrences of `key` [0 or 1 for unordered_map]


### operations:

- `um.insert(make_pair(key, value))` - adds a new key-value pair to the unordered map, if the key already exists, the insertion is ignored
- `um.emplace(key, value)` - constructs and adds a new key-value pair to the unordered map
- `um.erase(key)` - removes the element associated with `key`
- `um.erase(iterator)` - removes the element at the position pointed to by the iterator
- `um.clear()` - removes all elements from the unordered map
- `um.size()` - returns the number of elements in the unordered map
- `um.empty()` - checks if the unordered map is empty
- `um.bucket_count()` - returns the number of buckets in the hash table
- `um.load_factor()` - returns the average number of elements per bucket
- `um.max_load_factor()` - returns or sets the maximum load factor of the hash table


### example usage:

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> ages;

    // Inserting elements
    ages["Alice"] = 25;
    ages.emplace("Bob", 30);
    ages.emplace("Charlie", 35);

    // Accessing elements
    cout << "Alice's age: " << ages["Alice"] << endl;

    // Iterating through unordered_map
    for (const auto& pair : ages) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
```
