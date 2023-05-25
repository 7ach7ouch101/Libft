# Libft
My very first libary.
This project is about coding a C library.
It contains a lot of general purpose functions that my programs will rely upon in the future.

Part 1 - Libc Functions:

• isalpha->: Checks whether the given character is an alphabetic character (a-z or A-Z) ,returns a non-zero value if the character is an alphabetic character, otherwise returns 0.

• isdigit->: Checks whether the given character is a digit (0-9), returns a non-zero value if the character is a digit, otherwise returns 0.

• isalnum->: Checks whether the given character is an alphanumeric character (a-z, A-Z, or 0-9), returns a non-zero value if the character is an alphanumeric character, otherwise returns 0.

• isascii->: Checks whether the given character is a valid ASCII character (0-127), returns a non-zero value if the character is an ASCII character, otherwise returns 0.

• isprint->: Checks whether the given character is a printable character (including space) from the ASCII character set (0-127), returns a non-zero value if the character is a printable character, otherwise returns 0.

• strlen->: Calculates the length of the input string s by counting the number of characters until the null terminator '\0' is reached, returns the length of the string as a size_t value.

• memset->: Sets the first n bytes of the memory pointed to by s to the specified value c, returns a pointer to the memory area s.

• bzero->: Sets the first n bytes of the memory pointed to by s to zero (same as setting them to '\0'), this function is deprecated in modern C, and memset should be used instead.

• memcpy->: Copies n bytes from the memory location pointed to by src to the memory location pointed to by dest, returns a pointer to the destination memory area (dest).

• memmove->: Copies n bytes from the memory location pointed to by src to the memory location pointed to by dest, unlike memcpy, this function handles overlapping memory regions correctly, returns a pointer to the destination memory area (dest).

• strlcpy->: Copies the string src to the character array dest, ensuring that it does not exceed the specified size (including the null terminator), the destination string is always null-terminated (as long as size is greater than 0), returns the length of the source string (src).

• strlcat->: Appends the string src to the end of the string dest, ensuring that the resulting string does not exceed the specified size (including the null terminator), the destination string is always null-terminated (as long as size is greater than 0), returns the total length of the resulting string (the initial length of dest plus the length of src).

• toupper-> : Converts the given character to uppercase if it is a lowercase letter, returns the uppercase representation of the character if it is a lowercase letter, otherwise

• tolower->: Converts the given character to lowercase if it is an uppercase letter, returns the lowercase representation of the character if it is an uppercase letter, otherwise returns the character unchanged.

• strchr->: Searches for the first occurrence of the character c in the string s, returns a pointer to the first occurrence of c in s, or NULL if c is not found.

• strrchr->: Searches for the last occurrence of the character c in the string s, returns a pointer to the last occurrence of c in s, or NULL if c is not found.

• strncmp->: Compares at most the first n characters of the strings s1 and s2, returns an integer less than, equal to, or greater than 0, depending on whether s1 is less than, equal to, or greater than s2.

• memchr->: Searches for the first occurrence of the character c in the first n bytes of the memory block pointed to by s, returns a pointer to the first occurrence of c in s, or NULL if c is not found.

• memcmp->: Compares the first n bytes of the memory blocks pointed to by s1 and s2, returns an integer less than, equal to, or greater than 0, depending on whether s1 is less than, equal to, or greater than s2.

• strnstr->: Searches for the first occurrence of the string needle within the first len characters of the string haystack, returns a pointer to the first occurrence of needle in haystack, or NULL if needle is not found.

• atoi->: Converts the string str to an integer, returns the converted integer value.

• calloc->: Allocates memory for an array of count elements, each of size size, and initializes them to 0, returns a pointer to the allocated memory block.

• strdup->: Creates a duplicate (copy) of the string s1, allocates memory for the duplicate string using malloc and copies the contents of s1 into it, returns a pointer to the duplicate string.

Part 2 - Additional Functions:

• ft_substr->: Allocates and returns a substring from a given string.

• ft_strjoin->: Concatenates two strings and returns the result.

• ft_strtrim->: Allocates and returns a copy of a string with specified characters removed from the beginning and end.

• ft_split->: Splits a string into an array of substrings based on a delimiter character.

• ft_itoa->: Converts an integer to a string.

• ft_strmapi->: Applies a function to each character of a string, creating a new string.

• ft_striteri->: Applies a function to each character of a string, modifying it if necessary.

• ft_putchar_fd->: Outputs a character to a specified file descriptor.

• ft_putstr_fd->: Outputs a string to a specified file descriptor.

• ft_putendl_fd->: Outputs a string followed by a newline to a specified file descriptor.

• ft_putnbr_fd->: Outputs an integer to a specified file descriptor.
