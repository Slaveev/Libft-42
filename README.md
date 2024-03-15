# First project in 42 coding school. You have to create a library that you can use in future projects




These are the functions that i have created for my personal library.
FT stands for 42

# Technical considerations
• Declaring global variables is forbidden.
• If you need helper functions to split a more complex function, define them as static
functions. This way, their scope will be limited to the appropriate file.
• Place all your files at the root of your repository.
• Turning in unused files is forbidden.
• Every .c files must compile with the flags -Wall -Wextra -Werror.
• You must use the command ar to create your library. Using the libtool command is forbidden.
• Your libft.a has to be created at the root of your repository.




# Part 1 - Libc functions
To begin, you must redo a set of functions from the libc. Your functions will have the same prototypes and implement the same behaviors as the originals. They must comply with the way they are defined in their man. The only difference will be their names. They will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.

• isalpha • isdigit • isalnum • isascii • isprint • strlen • memset • bzero
• memcpy • memmove • strlcpy • strlcat • calloc • strdup 
• toupper • tolower • strchr • strrchr • strncmp • memchr • memcmp • strnstr • atoi

# Part 2 - Additional functions
In this second part, you must develop a set of functions that are either not in the libc, or that are part of it but in a different form.

• ft_substr • ft_strjoin • ft_strtrim ft_split • ft_itoa • ft_strmapi • ft_striteri • ft_putchar_fd
