## vectors

- dynamic array
- uses singly linked list
- efficient in random access and sequential operations


### initializations:

- `vector<DataType> vec` - creates an empty vector [can be initialized  with initializer lists]
- `vector<DataType> vec(size)` - creates a vector with `size` elements
- `vector<DataType> vec(size, value)` - creates a vector with `size` elements, each initialized to `value`
- `vector<DataType> vec(vec2)` - creates a vector with the same elements as `vec2`>
- `vector<vector<DataType>> matrix` - creates an empty 2d vector [can be initialized with initializer list of lists]
- `vector<vector<DataType>> matrix(rows, vector<DataType>(cols))` - creates a 2d vector with `rows` rows and `cols` columns


### access members:

- direct access
    - `vec[index]` - accesses the element at `index`
    - `vec.at(index)` - accesses the element at `index` with bounds checking
- iterators
    - `vector<DataType>::iterator it = vec.begin();` - initializes an iterator
    - `while (it != vec.end())` - loops through the vector elements


### operations:

- `vec.push_back(value)` - adds an element to the end of the vector
- `vec.emplace_back(value)` - adds an element to the end of the vector
- `vec.pop_back()` - removes the last element from the vector
- `vec.front()` - returns the first element
- `vec.back()` - returns the last element


### properties:

- `vec.begin()` - returns an iterator to the first element
- `vec.end()` - returns an iterator to the position just past the last element
- `vec.rbegin()` - returns a reverse iterator to the last element
- `vec.rend()` - returns a reverse iterator to the position just before the first element
- `vec.size()` - returns the number of elements in the vector
- `vec.capacity()` - returns the size of the allocated storage
- `vec.empty()` - returns `true` if the vector is empty, `false` otherwise


### modifiers:

- `vec.erase(it)` - removes the element at `it` and returns an iterator following the last removed element
- `vec.erase(it, it2)` - removes the elements in the range `[it, it2)`
- `vec.insert(it, value)` - inserts `value` before `it`
- `vec.insert(it, count, value)` - inserts `count` copies of value before `it`
- `vec.insert(it, vec2.begin(), vec2.end())` - inserts the elements in `vec2` before `it`
- `vec.clear()` - removes all elements from the vector
- `vec.swap(vec2)` - swaps the contents of two vectors
- `vec.resize(new_size)` - changes the size of the vector, possibly adding or removing elements
- `vec.shrink_to_fit()` - reduces the capacity of the vector to fit its size [this is a non-binding request, so it's not guaranteed]


### example:

```cpp
vector<int> vec(5, 10);

vec.push_back(20);

vec[1] = 15;
cout << "element at index 1: " << vec[1] << endl;

for (auto it = vec.begin(); it != vec.end(); ++it) {
    cout << *it << " ";
}
cout << endl;

vec.pop_back();

vec.clear();
```
