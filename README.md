# String Tools
A variety of functions useful for handling strings. (was Center-Justified)

## Functions
`centerJustify()`:
The function takes in the preferred width for text / console as an integer `int`, the text is then taken as a string `std::string`, and then the fill character `char`.
Uneven sizes of strings? No problem! The function adjusts to add another fill character at the end of the fill section.

`splitString()`:
This function takes an input string and a `char` deliminator returning a `vector` of `string`. 

## Examples

Include for `string_tools.hpp`
```
// include library from same directory
#include "./string_tools.hpp"

// include from a seperate directory (most common)
#include "../include/string_tools.hpp"
```

Include for `string_tools.cpp`
```
// include from same source directory (most common)
#include "./string_tools.cpp"

// include from seperate directory
#include "../include/string_tools.cpp"
```

Usage of `splitString`
```
// splitString(std::string input, char delim)
// char uses single apostrophe as opposed to string's quotation marks
// example returns a vector containing "Input" and "string"
splitString("Input,string", ',');
```

Usage of `centerJustify`
```
centerJustify(40, "Justified!", '-');
```