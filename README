# Dynamic String Library

The Dynamic String Library (`dyn_str`) is a C library for managing dynamically resizable strings. It provides a `t_dyn_str` data structure that allows you to work with strings of varying lengths efficiently. This library is designed to be easy to use and memory-efficient.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Structure](#structure)
- [Functions](#funtions)
- [Contributing](#contributing)
- [License](#license)

## Installation

To use this library in your C project, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/dyn_str.git
   ```
2. Include the library files in your project.

3. Compile your project with the library.

## Usage

- Here's a basic example of how to use the Dynamic String Library in your C code:

	```C
	#include "dyn_str.h"

	int main() {
    // Create a dynamic string with an initial capacity
    t_dyn_str *ds = ds_create(16);

    // Append a character to the dynamic string
    ds_append_char(ds, 'H');
    ds_append_char(ds, 'e');
    ds_append_char(ds, 'l');
    ds_append_char(ds, 'l');
    ds_append_char(ds, 'o');

    // Append a string to the dynamic string
    ds_append_str(ds, ", World!");

    // Print the dynamic string
    printf("Dynamic String: %s\n", ds->str);

    // Clean up and free memory
    ds_destroy(ds);

    return 0;
	}
	```

## Structure
The `t_dyn_str` structure is at the core of the Dynamic String Library (libdynstr). It represents a dynamic string and contains the following fields:

- `char *str`: A pointer to the string buffer. This buffer stores the actual character data of the string.

- `size_t len`: The length of the string, which represents the number of characters in the string (excluding the null terminator).

- `size_t capacity`: The capacity of the string buffer. This indicates the maximum number of characters that can be stored in the buffer without needing to reallocate memory.

## Functions

- `ds_create`

	```C
	t_dyn_str *ds_create(size_t capacity)
	```

	Creates a new dynamic string with the specified initial capacity and returns a pointer to it.

- `ds_destroy`

	```C
	void ds_destroy(t_dyn_str *ds)
	```

	Destroys the dynamic string and frees the memory.

- `ds_append_char`

	```C
	size_t ds_append_char(t_dyn_str *ds, char c)
	```

	Appends a single character to the dynamic string and returns the number of characters appended (1 if successful, 0 otherwise).

- `ds_append_str`

	```C
	size_t ds_append_str(t_dyn_str *ds, char *str)
	```

	Appends a null-terminated string to the dynamic string and returns the number of characters appended (0 if the input string is NULL or if an error occurs).