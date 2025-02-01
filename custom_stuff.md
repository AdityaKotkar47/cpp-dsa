- change only what is needed, keep the rest as it is
- use `std::` prefix for custom comparators and hash functions

- creating a custom comparator for sorting
    ```cpp
    bool custom_comparator(const int& a, const int& b) {
        return a < b;
    }
    ```
    - here `a` and `b` are the elements in the same order as they are in the container
    - generally, we return what we expect to be true in the condition

- creating a custom less function for maps
    ```cpp
    namespace std {
        template <>
        struct less<T> {
            bool operator()(const T& a, const T& b) {
                return a < b;
            }

        };
    }
    ```
    - here `T` is the type of the key that needs to be compared
    - here `a` and `b` are the keys in the same order as they are in the container
    - generally, we return what we expect to be true in the condition
    - or you can directly do it in the class definition
    ```cpp
    class custom_class {
        bool operator<(const custom_class& other) const {
            return a < other.a;
        }
    };
    ```

- creating a custom hash function for unordered maps
    ```cpp
    namespace std {
        template <>
        struct hash<T> {
            size_t operator()(const T& a) {
                return a % 10;
            }
        };
    }
    ```
    - here `T` is the type of the key that needs to be hashed
    - here `a` is the key that needs to be hashed
    - generally, we return the expected hash value in the `operator()`
