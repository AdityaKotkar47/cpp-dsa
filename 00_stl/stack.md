## stack

- dynamic array
- LIFO [last in, first out] data structure
- efficient for adding and removing elements at the top


### initializations:

- `stack<DataType> st` - creates an empty stack
- `stack<DataType> st(lst)` - creates a stack from a list or vector


### access members:

- `st.top()` - returns the top element


### operations:

- `st.push(value)` - adds an element to the top of the stack
- `st.emplace(value)` - adds an element to the top of the stack
- `st.pop()` - removes the top element from the stack
- `st.empty()` - returns `true` if the stack is empty, `false` otherwise
- `st.size()` - returns the number of elements in the stack
