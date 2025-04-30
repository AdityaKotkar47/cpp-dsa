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
    - `sort(begin_iterator, end_iterator, custom_comparator)` - sorts the elements of a container using a custom comparator

-   - `max_element(begin_iterator, end_iterator)` - returns an iterator to the maximum element in a container
    - `min_element(begin_iterator, end_iterator)` - returns an iterator to the minimum element in a container

-   - `__builtin_popcount()` - returns the number of set bits in an integer
    - `__builtin_popcountll()` - returns the number of set bits in a long long integer

- `next_permutation(begin_iterator, end_iterator)` - generates the next lexicographically greater permutation of a container

- `gcd(a, b)` - returns the greatest common divisor of two numbers
    - for finding gcd of multiple numbers, use `gcd(a, gcd(b, c))`
    - for finding gcd of a range of numbers, use
        ```cpp
        int g = a[0];
        for (int i = 1; i < n; i++) {
            g = gcd(g, a[i]);
        }
        ```

- `lcm(a, b)` - returns the least common multiple of two numbers
    - for finding lcm of multiple numbers, use `lcm(a, lcm(b, c))`
    - for finding lcm of a range of numbers, use
        ```cpp
        int l = a[0];
        for (int i = 1; i < n; i++) {
            l = lcm(l, a[i]);
        }
        ```

- `rotate(begin_iterator, middle_iterator, end_iterator)` - rotates the elements of a container
    - for rotating a range of elements to the left, use
        ```cpp
        rotate(a.begin(), a.begin() + k, a.end());
        ```
    - for rotating a range of elements to the right, use
        ```cpp
        rotate(a.rbegin(), a.rbegin() + k, a.rend());
        ```

-   - `upper_bound(begin_iterator, end_iterator, value)` - returns an iterator to the first element in a container that is greater than the given value [subtract the iterator by the begin iterator to get the index]
    - `lower_bound(begin_iterator, end_iterator, value)` - returns an iterator to the first element in a container that is not less than the given value [subtract the iterator by the begin iterator to get the index]