# std::vector<bool> Gotchas

This repository demonstrates a common issue encountered when using `std::vector<bool>` in C++.  `std::vector<bool>` is a specialized container that doesn't adhere to the same rules as other `std::vector` instantiations.  This can lead to subtle, hard-to-debug errors involving iterators and standard algorithms.

The `vectorBoolBug.cpp` file shows code that exhibits the unexpected behavior. The `vectorBoolSolution.cpp` file shows a correct solution using a `std::vector<char>` or `std::bitset` when you need space efficiency.