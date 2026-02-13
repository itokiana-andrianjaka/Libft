*This project has been created as part of the 42 curriculum by tiana-an.*

# LIBFT: my first own library.

## Description:
**`LIBFT`**: libft is a project from the `42 school` where his objective is to create a personal library in the **C programming language**.
This library contains standard functions from libc, as well as additional utility functions that can be reused in future projects.

-   ***Goal***:  
    The main objectives are to:  
    `1`/Gain deep understanding of how libc function work.  
    `2`/Master pointer manipulation and memory management.  
    `3`/Create a reusable library for futur projects.

-   ***Overview***:  
    This project is divided into three parts:  
    `Part 1`- Libc function: Reimplementation of standard functions:
    ```
    ft_:
    • isalpha   • memcpy    • strrchr
    • isdigit   • memmove   • strncmp
    • isalnum   • strlcpy   • memchr
    • isascii   • strlcat   • memcmp
    • isprint   • toupper   • strnstr
    • strlen    • tolower   • atoi
    • memset    • strchr    • calloc
    • bzero     •strdup
    ```
    ---
    `Part 2`- Additional functions: Creation of useful functions for string manipulation and data conversion.
    ```
    ft_:
    • substr    • itoa          • putstr_fd
    • strjoin   • strmapi       • putendl_fd
    • strtrim   • striteri      • putnbr_fd
    • split     • putchar_fd
    ```
    ---
    `Part 3`- (linked lists): Implementation of functions to manipulate linked lists.
    ```
    ft_:
    • lstnew            • lstlast           • lstclear
    • lstadd_front      • lstadd_back       • lstiter
    • lstsize           • lstdelone         • lstmap
    ```
    ---
## Instructions:
The compilation is done using a **`Makefile`** with the `cc` compiler followed by the following flags:  
- `-Wall`: main warnings;  
- `-Wextra`: additional warnings;  
- `-Werror`: turns warnings into errors.  
But to compile the **libft.a library**, I added **`ar rcs`** to the **Makefile** for exception (The most important).

---
This Makefile contains the rules **$(NAME), all, clean, fclean, and re.**  
when we run the command, we:
```bash
    make
     #or
    make all
    #compile the libft.a library
```
---
```bash
    make clean
    #delete the object files (.o)
```  
---
```bash
    make fclean
    #delete all files (.o) and libft.a
```  
---
```bash
    make re
    #completely recompiles the project
```
---
## Resources:
I used Google traduction and Google's AI mode for some simple definitions and test ideas in each function; and also the Linux man page.

## Libft.a library's description:
This library, libft.a, contains standard libc functions as well as custom utilities. The goal is to create a reusable toolkit for all future projects **(where the use of standard functions is often prohibited)**.

---
## example of using the library
-   `I/` **Include de header file in your source code:**
```c
    #include "libft.h"
```
---
-   `II/` **Make sure that `make` has already been executed and compile your program with the library:**
```bash
    cc your_main_file.c libft.a -I.
```
---

In summary, this library will be my own portable "toolbox" that will be very useful for other projects to come.

---
