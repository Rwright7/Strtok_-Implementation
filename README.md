# `my_strtok` Implementation

The `my_strtok` function is a custom implementation of the string tokenization process in C. It provides a simplified version of the standard `strtok` function, allowing users to tokenize a given string based on specified separator characters.

## Usage

The `main` function in the provided `strtok.c` file demonstrates how to use the `my_strtok` function to tokenize a sample string containing names separated by colons and commas.

```c
int main(void) {
    // ... (refer to the full code in strtok.c for details)
}
```

## Function Signature

```c
char* my_strtok(char* str, const char* sep, char** str_start, size_t* token_len);
```

## Function Overview

The `my_strtok` function takes a string (`str`), a set of separator characters (`sep`), a pointer to the current position in the string (`str_start`), and a pointer to store the length of the extracted token (`token_len`). It returns a pointer to the extracted token.

## Implementation Details

- The function uses pointer manipulation to extract tokens from the input string.
- It handles cases where consecutive separators are present by skipping them.
- The length of each token is calculated and stored in the `token_len` variable.

## How to Use

To use the `my_strtok` function in your C projects, include the content of the `strtok.c` file in your source code. Refer to the `main` function in the file for an example of how to tokenize a string.

Feel free to integrate this `my_strtok` implementation into your projects where a custom string tokenizer is required. If you have any questions or suggestions for improvement, please feel free to let me know!