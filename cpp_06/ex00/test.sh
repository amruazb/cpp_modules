#!/bin/bash

# Array of test cases
test_cases=(
    "'a'"
    "'Z'"
    "'0'"
    "'\\n'"
    "'\\t'"
    "42"
    "-42"
    "0"
    "2147483647"  # Max int
    "-2147483648" # Min int
    "2147483648"
    "-2147483649"
    "42.0f"
    "-42.0f"
    "0.0f"
    "3.4028235e+38f"  # Max float
    "1.17549435e-38f" # Min positive float
    "-inff"
    "+inff"
    "nanf"
    "42.0"
    "-42.0"
    "0.0"
    "1.7976931348623157e+308"  # Max double
    "2.2250738585072014e-308" # Min positive double
    "-inf"
    "+inf"
    "nan"
    "invalid"
    "123abc"
    "abc123"
    ""
    "'abc'"
)

# Compile the program
make re

# Check if compilation was successful
if [ $? -ne 0 ]; then
    echo "Compilation failed. Exiting..."
    exit 1
fi

# Run test cases
for test in "${test_cases[@]}"; do
    echo "Test case: $test"
    ./convert "$test"
    echo
done


# strict valgrind test
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./convert "42"