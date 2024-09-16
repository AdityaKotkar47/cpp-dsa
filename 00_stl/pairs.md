## pairs in C++

- stores two values of different types in a single object/container.
- represent key-value pairs, coordinates, or any other scenario where you need to associate two values.

**syntax**:

```cpp
std::pair<T1, T2> myPair;
```

`T1` and `T2` are the data types of the two elements in the pair.

**access members**:

*   `first`: accesses the first element of the pair.
*   `second`: accesses the second element of the pair.

**example**:

```cpp
pair<int, int> p = make_pair(10, 20);
pair<int, int> q = {10, 20};
pair<int, int> r(10, 20);
pair<int, pair<int, int>> s = {1, {2, 3}};

cout << p.first << "\t" << p.second << endl;
cout << q.first << "\t" << q.second << endl;
cout << r.first << "\t" << r.second << endl;
cout << s.first << "\t" << s.second.first << "\t" << s.second.second << endl;
```

