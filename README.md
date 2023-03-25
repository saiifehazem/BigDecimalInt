# BigDecimalInt
BigDecimalInt is a C++ project that implements a class called BigReal, which represents statements with very long integer values and real numbers with arbitrary precision using object-oriented programming concepts.

The class is designed to support various arithmetic operations on real numbers, including addition and subtraction, as well as comparison operations. It also provides input/output functionality and methods for retrieving the size and sign of a BigReal object.

## **Installation**
To use the BigDecimalInt library, simply download or clone the project from the GitHub repository and include the BigReal.h header file in your C++ code.

## **Usage**

The BigReal class provides several constructors, including a default constructor, a constructor that takes a double value, a constructor that takes a string representation of a real number, and a constructor that takes a BigDecimalInt object. The class also provides copy and move constructors, as well as copy and move assignment operators.

The following arithmetic operators are defined for BigReal objects:

  + Addition (+)
  + Subtraction (-)


The following comparison operators are defined for BigReal objects:

  + Less than (<)
  + Greater than (>)
  + Equal to (==)


The class also provides a method for retrieving the size of a BigReal object, which represents the number of digits in the number, and a method for retrieving the sign of a BigReal object, which returns -1 if the number is negative, 0 if the number is zero, and 1 if the number is positive.

Finally, the class provides input/output functionality through the << and >> operators, which allow BigReal objects to be printed to standard output or read from standard input, respectively.
