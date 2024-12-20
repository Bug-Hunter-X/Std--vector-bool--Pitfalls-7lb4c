std::vector<bool> is not a real vector, it is a bitset that is implemented differently than a std::vector<T> for any other type T.  It does not provide the same memory layout or performance characteristics.  This can lead to unexpected behavior, especially regarding iterators and algorithms.