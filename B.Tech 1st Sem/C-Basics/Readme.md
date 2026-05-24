# C Programming Short Notes

## 1. Basics

- **Structure:**

```c
#include <stdio.h> // Preprocessor Directive

int main() {       // Entry point
    printf("Hello World!");
    return 0;      // End of function
}

```

- **Variables:** Names of memory locations used to store data.
- **Rules for Variables:**

1. Case sensitive.
2. 1st character must be a letter or `_`.
3. No commas or blank spaces.
4. No special symbols (except `_`).

- **Comments:**
- Single line: `// Comment`
- Multi-line: `/* Comment */`

### Data Types & Constants

1. **Integer Constants:** `1, 2, 3, 0, -1, -2`
2. **Real Constants:** `1.0, 2.0, 3.14, -2.4`
3. **Character Constants:** `'a', 'b', 'A', '#'` (Must be in single quotes)

### Keywords

- Reserved words that have special meanings to the compiler (e.g., `int`, `return`, `if`, `else`).
- There are **32 keywords** in C.

### Input & Output

- **Output:** `printf("Hello World");`
- **New Line:** `\n` inside strings.
- **Format Specifiers:**
- `%d`: Integer
- `%f`: Real number (float)
- `%c`: Character
- **Example:**

```c
int age = 21;
printf("age is %d", age);

```

- **Input:** `scanf("%d", &age);` (Uses `&` address-of operator).

---

## 2. Compilation & Instructions

- **Compilation Process:** Source Code (`Hello.c`) Compiler Machine Code (`a.exe`).
- **Instructions:** Statements in a program.

1. **Type Declaration:** Declaring variables before using them.
2. **Arithmetic Instructions:** `+`, `-`, `*`, `/`, `%`.
3. **Control Instructions:** Determine the flow of the program.

### Arithmetic Instructions

- **Operands:** Can be `int`, `float`, etc.
- **Modulus Operator (`%`):** Returns the remainder. Works only with integers.
- **Type Conversion:**
- `int` operation `int` `int`
- `int` operation `float` `float`
- `float` operation `float` `float`

- **Operator Precedence:**

1. `*`, `/`, `%`
2. `+`, `-`
3. `=`

- **Associativity:** Left to Right (for operators of same precedence).

---

## 3. Control Instructions

Used to determine the flow of the program.

1. **Sequence Control:** Line by line execution.
2. **Decision Control:** `if`, `else`.
3. **Loop Control:** `for`, `while`, `do-while`.
4. **Case Control:** `switch`.

### Operators

1. **Arithmetic:** `+`, `-`, `*`, `/`, `%`
2. **Relational:** `==`, `>`, `>=`, `<`, `<=`, `!=`
3. **Logical:** `&&` (AND), `||` (OR), `!` (NOT)
4. **Bitwise:** `&`, `|`, `^`, `~`, `<<`, `>>`
5. **Assignment:** `=`, `+=`, `-=`, `*=`, `/=`, `%=`
6. **Ternary:** `Condition ? Exp1 : Exp2;`

### Switch Case

```c
switch(expression) {
    case 1:
        // code
        break;
    case 2:
        // code
        break;
    default:
        // code
}

```

- Cases can be in any order.
- Nested switches are allowed.

---

## 4. Loop Control

Used to repeat some parts of the program under certain conditions.

### Types

1. **For Loop:**

```c
for(initialization; condition; update) {
    // do something
}

```

2. **While Loop:**

```c
while(condition) {
    // do something
}

```

3. **Do-While Loop:**

```c
do {
    // do something
} while(condition);

```

### Increment/Decrement Operators

- `++i` (Pre-increment): Increment, then use.
- `i++` (Post-increment): Use, then increment.
- `--i` (Pre-decrement) / `i--` (Post-decrement).

### Important Notes

- **Infinite Loop:** If the condition never becomes false.
- **Break:** Exits the loop immediately.
- **Continue:** Skips the current iteration and moves to the next.

---

## 5. Functions

A block of code that performs a particular task.

- Increases code reusability.

### Syntax

1. **Function Prototype:** `void printHello();` (Declaration)
2. **Function Definition:**

```c
void printHello() {
    printf("Hello");
}

```

3. **Function Call:** `printHello();` inside `main()`.

### Properties

- Execution always starts from `main()`.
- A function gets called directly or indirectly from `main`.
- There can be multiple functions in a program.

### Types of Functions

1. **Library Functions:** Inbuilt in C (e.g., `printf`, `scanf`).
2. **User-defined Functions:** Declared and defined by the programmer.

### Passing Arguments

- **Parameters (Formal Parameters):** Values in function definition (used to receive value).
- **Arguments (Actual Parameters):** Values passed in function call (used to send value).
- **Call by Value:** A copy of the argument is passed to the function. Changes in the function do not affect the original variable in the caller.

---

## 6. Recursion

When a function calls itself, it is called recursion.

### Example (Printing Hello World)

```c
void printHW(int count) {
    if(count == 0) {
        return; // Base Case
    }
    printf("Hello World\n");
    printHW(count - 1);
}

```

### Properties of Recursion

- Anything that can be done with iteration (loops) can be done with recursion and vice-versa.
- Recursion can sometimes provide a simpler solution.
- **Base Case:** The condition which stops recursion. Without it, the program encounters **Stack Overflow** (Infinite loop in recursion).

---

## 7. Pointers

A variable that stores the memory address of another variable.

### Syntax

```c
int age = 22;
int *ptr = &age;  // ptr stores the address of age
int _age = *ptr;  // *ptr gives the value stored at the address

```

### Format Specifiers

- Print Address: `%p`
- Print Value: `%d`

### Pointer to Pointer

A variable that stores the memory address of another pointer.

```c
int **pptr;

```

### Function Calls with Pointers

1. **Call by Value:** Pass value of variable.
2. **Call by Reference:** Pass address (`&`) of variable. Allows changing the original variable.

---

## 8. Arrays

Collection of similar data types stored at contiguous memory locations.

### Syntax

```c
int marks[3];
char name[10];
float price[2];

```

### Input & Output

```c
scanf("%d", &marks[0]);
printf("%d", marks[0]);

```

- **Indexing:** 0-based (0 to n-1).

### Pointer Arithmetic

- Pointer can be incremented (`ptr++`) or decremented (`ptr--`).
- **Increment:** Adds bytes equal to the size of the data type (e.g., `int` adds 4 bytes).
- We can subtract one pointer from another.
- We can compare two pointers.

### Array as Pointer

- An array name is a pointer to the first element.

```c
int *ptr = arr; // Same as &arr[0]

```

### Multidimensional Arrays (2D)

```c
int arr[2][2] = {{1, 2}, {3, 4}};
// Access: arr[0][0], arr[0][1], etc.

```

---

## 9. Strings

A character array terminated by a `\0` (null character).

### Initialization

```c
char name[] = {'S', 'U', 'R', 'A', 'J', '\0'};
char class[] = "ARYA"; // Compiler adds \0 automatically

```

### String Functions

- **`gets(str)`:** Input a string (can accept multi-word strings with spaces). _Note: `gets` is dangerous/outdated._
- **`puts(str)`:** Output a string.
- **Pointer to String:**
- `char *str = "Hello World";` (Can be reinitialized).
- `char str[] = "Hello World";` (Cannot be reinitialized).

### Standard Library `<string.h>`

1. **`strlen(str)`:** Counts number of characters (excluding `\0`).
2. **`strcpy(new, old)`:** Copies value of old string to new string.
3. **`strcat(first, second)`:** Concatenates second string to the end of the first.
4. **`strcmp(first, second)`:** Compares two strings. Returns 0 if equal.

---

## 10. Structures

A collection of values of different data types.

### Syntax

```c
struct Student {
    char name[100];
    int roll;
    float cgpa;
};

struct Student s1;
s1.cgpa = 7.5;

```

### Benefits

- Keeps data organized.
- Good for data management.

### Array of Structures

```c
struct Student ECE[100]; // Array of 100 students
ECE[0].roll = 2004;

```

### Initialization

```c
struct Student s1 = {"Suraj", 123, 8.23};

```

### Pointers to Structures

```c
struct Student *ptr = &s1;
printf("Student code: %d", ptr->code); // Arrow operator

```

### Typedef

Keyword used to create an alias for data types.

```c
typedef struct ComputerEngineeringStudent {
    // fields
} coe;

coe s1;

```

---

## 11. File Input/Output (I/O)

- **RAM:** Volatile (data lost when program terminates).
- **Hard Disk:** Non-volatile (data persists).
- **File:** Container in a storage device to store data.

### File Pointer

A pointer of type `FILE` is needed to communicate with files.

```c
FILE *fptr;
fptr = fopen("filename.txt", "mode");

```

### File Opening Modes

- `"r"`: Open to read.
- `"w"`: Open to write (overwrites).
- `"a"`: Open to append.
- `"rb"`, `"wb"`: Binary read/write.

### Reading & Writing

- **`fscanf(fptr, "%c", &ch);`**: Read formatted data.
- **`fprintf(fptr, "%c", 'A');`**: Write formatted data.
- **`fgetc(fptr)`**: Read a character.
- **`fputc('A', fptr)`**: Write a character.
- **`EOF`**: End of File.

---

## 12. Dynamic Memory Allocation (DMA)

A way to allocate memory to a data structure during runtime.

### Functions (`<stdlib.h>`)

1. **`malloc()`**: Memory Allocation. Allocates a block of memory (raw bytes). Returns `void` pointer.
2. **`calloc()`**: Continuous Allocation. Initializes with 0.
3. **`free()`**: Frees memory that was allocated.
4. **`realloc()`**: Re-allocation. Increases or decreases memory using the same pointer.

**Example:**

```c
int *ptr;
ptr = (int*) malloc(5 * sizeof(int));

```
