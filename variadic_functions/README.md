# 0x0F. C - Variadic functions

```
╔════════════════════════════════════════════════════════╗
║                                                        ║
║     VARIADIC FUNCTIONS IN C                           ║
║     Learning Variable Arguments                       ║
║                                                        ║
║     ▓▒░ va_start | va_arg | va_end ░▒▓               ║
║                                                        ║
╚════════════════════════════════════════════════════════╝
```

---

## 📋 Description

```
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃ This project explores variadic functions in C,         ┃
┃ teaching you how to write functions that accept        ┃
┃ a variable number of arguments using the               ┃
┃ va_start, va_arg, and va_end macros.                   ┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
```

---

## 🎯 Learning Objectives

```
╔═══════════════════════════════════════════════════════╗
║ ☆ By completing this project, you will learn:        ║
╚═══════════════════════════════════════════════════════╝
```

### General

- ⚡ What are variadic functions
- ⚡ How to use `va_start`, `va_arg` and `va_end` macros
- ⚡ Why and how to use the `const` type qualifier

---

## 📦 Requirements

```
╔════════════════════════════════════════════════════════╗
║          ⚙️  COMPILATION & CODE STANDARDS  ⚙️         ║
╚════════════════════════════════════════════════════════╝
```

### ⚡ Compilation

```
┌─────────────────────────────────────────────────────┐
│ OS:       Ubuntu 20.04 LTS                          │
│ Compiler: gcc                                       │
│ Flags:    -Wall -Werror -Wextra -pedantic -std=gnu89│
│ Editors:  vi, vim, emacs                           │
└─────────────────────────────────────────────────────┘
```

### 📝 Code Style & Rules

| Rule | Status |
|------|:------:|
| Betty Code Style | ✓ Required |
| Global Variables | ✗ Forbidden |
| Functions per file | ≤ 5 |
| Include Guards | ✓ Required |
| Trailing Newline | ✓ Required |

### 📚 Allowed Functions

```
✓ malloc          ✓ free              ✓ exit
```

### ⛔ Forbidden Functions

```
✗ printf          ✗ puts              ✗ calloc
✗ realloc         ✗ sprintf           ✗ etc...
```

### 🔮 Allowed Macros & Tools

```
✓ va_start        ✓ va_arg            ✓ va_end
✓ _putchar
```

**Important Notes:**
- ⚠️ Don't push `_putchar.c` — we provide our own
- ⚠️ `main.c` files are for testing only
- ⚠️ Header file: `variadic_functions.h` with include guards
- ⚠️ All files must end with a new line

---

## 🚀 Tasks

```
╔═════════════════════════════════════════════════════════════╗
║               📊 PROJECT TASKS & OBJECTIVES 📊              ║
╚═════════════════════════════════════════════════════════════╝
```

### 🔷 Task 0️⃣  Beauty is variable

**File:** `0-sum_them_all.c`

Write a function that returns the sum of all its parameters.

```c
int sum_them_all(const unsigned int n, ...);
```

**Requirements:**
- ► If `n` is 0, return 0
- ► Otherwise return the sum of all the parameters
- ► Variadic function with variable argument count

---

### 🔶 Task 1️⃣  To be is to be the value of a variable

**File:** `1-print_numbers.c`

Write a function that prints numbers, followed by a new line.

```c
void print_numbers(const char *separator, const unsigned int n, ...);
```

**Requirements:**
- ► `separator` is the string to be printed between numbers
- ► If `separator` is NULL, don't print it
- ► No string functions allowed
- ► Use `_putchar` for output

---

### 🔴 Task 2️⃣  One woman, one man, one vote

**File:** `2-print_strings.c`

Write a function that prints strings, followed by a new line.

```c
void print_strings(const char *separator, const unsigned int n, ...);
```

**Requirements:**
- ► `separator` is the string to be printed between strings
- ► If `separator` is NULL, don't print it
- ► If a string is NULL, print `(nil)` instead
- ► No string functions allowed
- ► Use `_putchar` for output

---

### 🟣 Task 3️⃣  Print everything

**File:** `3-print_all.c`

Write a function that prints anything.

```c
void print_all(const char * const format, ...);
```

**Format Types:**
```
┌─────────────────────────────────────┐
│ c  →  char                          │
│ i  →  integer                       │
│ f  →  float                         │
│ s  →  char * (prints (nil) if NULL) │
└─────────────────────────────────────┘
```

**Requirements:**
- ► Last parameter is 0
- ► Nothing is printed before the first argument
- ► A new line is printed at the end
- ► No string functions allowed
- ► Use `_putchar` for output

---

## 📁 Project Structure

```
variadic_functions/
├── 0-sum_them_all.c
├── 1-print_numbers.c
├── 2-print_strings.c
├── 3-print_all.c
├── variadic_functions.h
└── README.md
```

---

## 🔗 Key Concepts

```
╭─────────────────────────────────────────────────────────╮
│ Variadic Functions                                      │
│ ─────────────────────────────────────────────────────   │
│ • Functions with variable number of arguments           │
│ • Defined using ... (ellipsis) in prototype             │
│ • Requires <stdarg.h> macros                            │
│ • Common use cases: printf, sprintf, etc.               │
╰─────────────────────────────────────────────────────────╯
```

---

```
    ╔════════════════════════════════════════════════════╗
    ║                                                    ║
    ║   ✨ END OF PROJECT SPECIFICATIONS ✨            ║
    ║   Good luck on your coding journey!               ║
    ║                                                    ║
    ║   Remember: "Code is poetry written for machines" ║
    ║                                                    ║
    ╚════════════════════════════════════════════════════╝
```

---

## 👨‍💻 Author

**Holberton School** — *Specializing in Software Engineering Excellence*

```
═══════════════════════════════════════════════════════════
  Built with ❤️  by the Holberton School Community
═══════════════════════════════════════════════════════════
```