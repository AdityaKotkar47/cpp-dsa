- `swap()` - swaps two values using reference

-   - `max()` - calculates maximum between two values
        - use `max(a, max(b, c))` approach for calculating maximum value between multiple variables
        - if you add anything to it, then it'll become negative
    -  `min()` - calculates minimum between two values
        - use `min(a, min(b, c))` approach for calculating minimum value between multiple variables
        - if you subtract anything from it, then it'll become positive

-   - `INT_MIN` is the lowest possible integer value [use for initializing max value variables]
    - `INT_MAX` is the highest possible integer value [use for initializing min value variables]

-   - `sort(begin_iterator, end_iterator)` - sorts the elements of a container in ascending order
    - `sort(begin_iterator, end_iterator, greater<int>())` - sorts the elements of a container in descending order

-   - `max_element(begin_iterator, end_iterator)` - returns an iterator to the maximum element in a container
    - `min_element(begin_iterator, end_iterator)` - returns an iterator to the minimum element in a container

-   - `__builtin_popcount()` - returns the number of set bits in an integer
    - `__builtin_popcountll()` - returns the number of set bits in a long long integer

- `next_permutation(begin_iterator, end_iterator)` - generates the next lexicographically greater permutation of a container