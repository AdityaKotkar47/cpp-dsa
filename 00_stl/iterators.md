## iterators in C++

- they are objects that allow you to traverse through elements in containers
- they act as pointers, providing access to container elements and allowing movement from one element to another
- they are bounded, so safer and limited to specific operations of the respective container

**syntax**:

```cpp
ContainerType<DataType>::iterator it;
```

**iterator in action**:

- `container.begin();` - points to the first element in the container

- `container.end();` - points to the position just past the last element in the container

- `*it` gives the element at the current position of the iterator [in vectors]

- in containers with key-value pairs
    - `it->first` - accesses the key
    - `it->second` - accesses the value

- `it++` moves the iterator to the next element.

**example**

```cpp
unordered_map<string, int> lala;
unordered_map<string, int>::iterator it;

lala["abc0"] = 0;
lala["abc1"] = 1;
lala["abc2"] = 2;
lala["abc3"] = 3;
lala["abc4"] = 4;
lala["abc5"] = 5;

cout << endl << "\tKey\tValue" << endl;
for (it = lala.begin(); it != lala.end(); it++){
    cout << "\t" << it->first << "\t" << it->second << endl;
}

for (auto [key, value] : lala)
    cout << key << " : " << value << endl;


vector<int> lolo;
lolo.push_back(0);
lolo.push_back(1);
lolo.push_back(2);
lolo.push_back(3);
lolo.push_back(4);
lolo.push_back(5);

vector<int>::iterator vit = lolo.begin();
while (vit != lolo.end()){
    cout << *vit << endl;
    vit++;
}
```