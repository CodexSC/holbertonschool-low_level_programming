```
╔═══════════════════════════════════════════════════════════════════════════════╗
║                                                                               ║
║  ███████╗██╗   ██╗███╗   ██╗ ██████╗████████╗██╗ ██████╗ ██╗   ██╗███████╗  ║
║  ██╔════╝██║   ██║████╗  ██║██╔════╝╚══██╔══╝██║██╔═══██╗██║   ██║██╔════╝  ║
║  █████╗  ██║   ██║██╔██╗ ██║██║        ██║   ██║██║   ██║██║   ██║███████╗  ║
║  ██╔══╝  ██║   ██║██║╚██╗██║██║        ██║   ██║██║   ██║██║   ██║╚════██║  ║
║  ██║     ╚██████╔╝██║ ╚████║╚██████╗   ██║   ██║╚██████╔╝╚██████╔╝███████║  ║
║  ╚═╝      ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝   ╚═╝   ╚═╝ ╚═════╝  ╚═════╝ ╚══════╝  ║
║                                                                               ║
║    ██████╗ ██████╗ ██╗███╗   ██╗████████╗███████╗██████╗ ███████╗           ║
║    ██╔══██╗██╔═══██╗██║████╗  ██║╚══██╔══╝██╔════╝██╔══██╗██╔════╝           ║
║    ██████╔╝██║   ██║██║██╔██╗ ██║   ██║   █████╗  ██████╔╝███████╗           ║
║    ██╔═══╝ ██║   ██║██║██║╚██╗██║   ██║   ██╔══╝  ██╔══██╗╚════██║           ║
║    ██║     ╚██████╔╝██║██║ ╚████║   ██║   ███████╗██║  ██║███████║           ║
║    ╚═╝      ╚═════╝ ╚═╝╚═╝  ╚═══╝   ╚═╝   ╚══════╝╚═╝  ╚═╝╚══════╝           ║
║                                                                               ║
║                    🌊 ~ DELEGATED EXECUTION ~ 🌊                            ║
║              Where Functions Become the Ultimate Tool                        ║
║                 Unlock the Power of Flexible Code                            ║
║                                                                               ║
╚═══════════════════════════════════════════════════════════════════════════════╝
```

## 📖 Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### 🎯 General

* **What are function pointers and how to use them**
  - Declaration, initialization, and invocation
  - Passing functions as arguments
  - Storing functions in variables

* **What does a function pointer exactly hold**
  - Memory addresses of functions
  - Pointer arithmetic in function context
  - Type safety with function signatures

* **Where does a function pointer point to in the virtual memory**
  - Text/Code segment location
  - Virtual memory layout
  - Address resolution during runtime

---

## 🛠️ Requirements

### 📋 General

| Requirement | Details |
|---|---|
| **Editors** | `vi`, `vim`, `emacs` |
| **Compilation** | Ubuntu 20.04 LTS with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89` |
| **File Format** | All files must end with a newline |
| **Documentation** | `README.md` at root is mandatory |
| **Code Style** | `Betty` style (checked with betty-style.pl and betty-doc.pl) |
| **Global Variables** | ❌ Not allowed |
| **Functions per File** | Maximum 5 |
| **Allowed Libraries** | Only `malloc`, `free`, `exit` |
| **Forbidden** | `printf`, `puts`, `calloc`, `realloc`, etc. |
| **Output Function** | `_putchar` allowed (school-provided) |
| **_putchar.c** | Don't push it (we provide our own) |
| **main.c Files** | For testing only (don't push) |
| **Header File** | Must be named `function_pointers.h` |
| **Include Guards** | All header files must have them |

---

## 📁 Project Structure

```
function_pointers/
├── 📄 function_pointers.h        ← Header with prototypes & include guards
├── 💾 0-print_name.c             ← Print a name using function pointer
├── 💾 1-array_iterator.c         ← Apply function to each array element
├── 💾 2-int_index.c              ← Search array with comparison function
├── 📂 Task 3 - Calculator
│   ├── 3-main.c                  ← Main program for calculator
│   ├── 3-op_functions.c          ← Operation implementations (+, -, *, /, %)
│   ├── 3-get_op_func.c           ← Get the appropriate operation function
│   └── 3-calc.h                  ← Calculator header file
└── 📖 README.md                  ← This file
```

---

## 🎓 Core Concepts

### What is a Function Pointer?

A function pointer is a variable that stores the **memory address of a function**, allowing you to call it indirectly.

```c
// Syntax: return_type (*pointer_name)(parameter_types)
void (*print_func)(char *);  // Pointer to function taking char* and returning void
```

### Why Function Pointers?

| Benefit | Use Case |
|---------|----------|
| **Flexibility** | Same code, different behaviors |
| **Abstraction** | Hide implementation details |
| **Callbacks** | Execute code when events occur |
| **Higher-order functions** | Functions operating on functions |
| **Plugin systems** | Dynamic function loading |

---

## ✅ Compilation Command

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.o -o program
```

**Or combined:**
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program
```

---

## 🚀 Quick Start

1. Create your header file with include guards
2. Implement functions in separate `.c` files
3. Compile with required flags
4. Test with provided `main.c`
5. Verify Betty style compliance
6. Push to repository

---

---

### 💎 Remember

> *"Function pointers are not magic—they're elegant delegation."*

**Master them, and unlock the true power of C.**

---

**Status:** 🟢 Ready to Code  
**Difficulty:** 🔧 Intermediate  
**Holberton School** • Low-Level Programming