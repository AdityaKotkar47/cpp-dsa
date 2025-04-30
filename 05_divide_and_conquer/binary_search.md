- can be applied only on monotonic sequences

- monotonic sequence: a sequence that is either entirely non-increasing or non-decreasing

- can also be used with a monotonic predicate function that returns a boolean value

- the sequence given by the monotonic predicate function is 
    - `true true ... false false ...` - ends with false
    - `false false ... true true ...` - ends with true

- implementation
    ```cpp
    low = 0, high = n - 1
    while (high - low > 1) {
        mid = (low + high) / 2
        if (v[mid] < target) {
            low = mid + 1
        } else {
            high = mid
        }
    }
    if (v[low] == target) {
        return low
    } else if (v[high] == target) {
        return high
    } else {
        return -1
    }
    ```

- lower_bound:
    - the first position where `v[i] >= target`
    - implementation
        ```cpp
        low = 0, high = n - 1
        while (high - low > 1) {
            mid = (low + high) / 2
            if (v[mid] < target) {
                low = mid + 1
            } else {
                high = mid
            }
        }
        if (v[low] >= target) {
            return low
        } else if (v[high] >= target) {
            return high
        } else {
            return -1
        }
        ```

- upper_bound:
    - the first position where `v[i] > target`
    - implementation
        ```cpp
        low = 0, high = n - 1
        while (high - low > 1) {
            mid = (low + high) / 2
            if (v[mid] <= target) { // cause we don't want to include the target
                low = mid + 1
            } else {
                high = mid
            }
        }
        if (v[low] > target) {
            return low
        } else if (v[high] > target) {
            return high
        } else {
            return -1
        }
        ```

- nth root of a number:
    - implementation
        ```cpp
        double eps = 1e-6 // for precision till 5 decimal places
        double nth_root(double x, int n) {
            double low = 0, high = x, mid
            while (high - low > eps) {
                mid = (low + high) / 2
                if (pow(mid, n) < x) { // nth root
                    low = mid
                } else {
                    high = mid
                }
            }
            return low
        }
        ```
