# Center-Justified
A simple system for creating center justified text.

## How to use
The function takes in the preferred width for text / console as an integer `int`, the text is then taken as a string `std::string`, and then the fill character `char`.
Uneven sizes of strings? No problem! The function adjusts to add another fill character at the end of the fill section.

### Example
```
// Insert function centerJustify from main.cpp here

int main() {
    centerJustify(40, "Justified!", '-');
}
```