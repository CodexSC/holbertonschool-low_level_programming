# C - MEMORY ALLOCATION

```
    ╔════════════════════════════════════════════════════════════════╗
    ║                                                                ║
    ║      ███████████████████████████████████████████████████       ║
    ║      ██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██         ║
    ║      ██░  ▓▓▓▓▓▓░  ▓▓▓▓▓░  ▓▓▓▓░  ▓▓▓▓▓  ▓▓▓▓▓  ░██            ║
    ║      ██░  ▓░░░▓░  ▓░░░░░  ▓░░░░  ▓░░░▓  ▓░░░▓  ░██             ║
    ║      ██░  ▓▓▓▓▓░  ▓▓▓▓░   ▓░░░░  ▓▓▓░▓  ▓▓▓▓░  ░██             ║
    ║      ██░  ▓░░░░░  ▓░░░░   ▓░░░░  ▓░▓░░  ▓░░░░  ░██             ║
    ║      ██░  ▓░░░░░  ▓░░░░░  ▓▓▓▓░  ▓░░▓░  ▓░░░░  ░██             ║
    ║      ██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██         ║
    ║      ███████████████████████████████████████████████████       ║
    ║                                                                ║
    ║        ⚡ DYNAMIC MEMORY MANAGEMENT SYSTEM ⚡                    ║
    ║            malloc() • calloc() • realloc() • exit()            ║
    ║                                                                ║
    ║      ▓▓▓  HEAP ALLOCATION PROTOCOLS  ▓▓▓                       ║
    ║      ░░░  MEMORY SAFETY STANDARD     ░░░                       ║
    ║                                                                ║
    ╚════════════════════════════════════════════════════════════════╝
```

---

## 📚 RESOURCES

### Recommended Reading/Watching
- "Do I cast the result of malloc?" - Understanding malloc return values and type safety

### Man Pages / Help
```
man exit (3)       - Process termination and exit codes
man calloc         - Memory allocation with automatic zeroing
man realloc        - Dynamic memory reallocation
```

---

## 🎯 LEARNING OBJECTIVES

By the end of this project, you will be able to explain to anyone, without Google:

### Core Concepts
- ⚡ How to use the `exit` function properly
- ⚡ What `calloc` is and how to use it from the standard library
- ⚡ What `realloc` is and how to use it from the standard library
- ⚡ Memory allocation strategies in C
- ⚡ Error handling for dynamic memory operations

---

## 📋 REQUIREMENTS

### Environment
```
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃ Allowed Editors: vi, vim, emacs                 ┃
┃ Compilation: Ubuntu 20.04 LTS with gcc          ┃
┃ Flags: -Wall -Werror -Wextra -pedantic -std=gnu89 ┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
```

### File Requirements
```
╔════════════════════════════════════════════════════════╗
║  ✓ All files must end with a newline                   ║
║  ✓ README.md file mandatory at project root            ║
║  ✓ main.h header file with ALL prototypes              ║
║  ✓ Betty style compliance (betty-style.pl)             ║
║  ✓ Betty documentation (betty-doc.pl)                  ║
╚════════════════════════════════════════════════════════╝
```

### Code Restrictions
```
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃ ✗ No global variables allowed                   ┃
┃ ✗ Maximum 5 functions per file                  ┃
┃ ✗ No printf(), puts(), calloc(), realloc() in   ┃
┃   implementation (except as examples)           ┃
┃ ✓ Only malloc, free, exit permitted             ┃
┃ ✓ _putchar allowed for output                   ┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
```

---

## ✅ PERMITTED FUNCTIONS

| Function | Status | Purpose |
|----------|--------|---------|
| `malloc` | ✅ **YES** | Dynamic memory allocation |
| `free` | ✅ **YES** | Memory deallocation |
| `exit` | ✅ **YES** | Process termination |
| `_putchar` | ✅ **YES** | Character output |
| `printf` | ❌ **NO** | Forbidden |
| `puts` | ❌ **NO** | Forbidden |
| `calloc` | ❌ **NO** | Cannot implement (for learning) |
| `realloc` | ❌ **NO** | Cannot implement (for learning) |

---

## 📁 PROJECT STRUCTURE

```
memory-allocation-project/
│
├── README.md                 [Project documentation]
├── main.h                    [Header file - REQUIRED]
│                             [All prototypes must be here]
│
├── malloc_checked.c          [Memory allocation wrapper]
├── array_malloc.c            [Array allocation functions]
├── more_malloc.c             [Extended allocation functions]
│
├── _putchar.c               [NOT submitted - system file]
└── main.c                   [NOT submitted - test file]
```

---

## 🔧 COMPILATION

```bash
# Basic compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o program *.c

# With multiple files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o memory_prog \
    _putchar.c malloc_checked.c main.c
```

---

## 📝 SUBMISSION CHECKLIST

```
╔════════════════════════════════════════════════════════╗
║           BEFORE YOU PUSH TO REPOSITORY                ║
╠════════════════════════════════════════════════════════╣
║  ✓ main.h pushed with all function prototypes          ║
║  ✓ _putchar.c NOT in repo (uses system version)        ║
║  ✓ main.c NOT in repo (uses system test files)         ║
║  ✓ All files end with newline                          ║
║  ✓ Betty style verified with betty-style.pl            ║
║  ✓ Betty documentation verified with betty-doc.pl      ║
║  ✓ Compilation successful with required flags          ║
║  ✓ No global variables in code                         ║
║  ✓ Maximum 5 functions per file                        ║
║  ✓ Only malloc, free, exit used                        ║
║  ✓ README.md created and complete                      ║
╚════════════════════════════════════════════════════════╝
```

---

## 🎮 COMPILATION FLAGS EXPLAINED

```
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃ -Wall       All warnings enabled                ┃
┃ -Werror     Warnings treated as errors          ┃
┃ -Wextra     Extra warnings                      ┃
┃ -pedantic   Strict ISO C compliance             ┃
┃ -std=gnu89  C89 standard with GNU extensions    ┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
```

---

## 🛡️ ERROR HANDLING PATTERN

```
malloc() call
      ↓
  ╔═════════╗
  ║ NULL?   ║
  ╚═════════╝
    /    \
  YES    NO
  /        \
exit(98)  return(ptr)
  ↓         ↓
FATAL    SUCCESS
```

---

## 📖 HEADER FILE REQUIREMENTS

Your `main.h` must contain:

```c
#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>

int _putchar(char c);

/* Function prototypes go here */
void *malloc_checked(unsigned int b);
char *create_array(unsigned int size, char c);
/* ... other prototypes ... */

#endif
```

---

## ⚡ SYSTEM OPERATIONS

```
╔════════════════════════════════════════════════════════╗
║            SYSTEM DIAGNOSTICS STATUS                   ║
╠════════════════════════════════════════════════════════╣
║  Memory Engine       [ ▓▓▓▓▓▓▓░░░ ] 70%                ║
║  Allocation Stack    [ ▓▓▓▓▓▓▓▓░░ ] 80%                ║
║  Error Handler       [ ▓▓▓▓▓▓▓▓▓░ ] 90%                ║
║  Safety Protocols    [ ▓▓▓▓▓▓▓▓▓▓ ] 100%               ║
╠════════════════════════════════════════════════════════╣
║  Status: ▓▓▓▓▓▓▓▓▓░ 95% OPERATIONAL                    ║
║  Protocol: exit(98) on malloc failure                  ║
╚════════════════════════════════════════════════════════╝
```

---

## 🚀 DEPLOYMENT STATUS

```
╔════════════════════════════════════════════════════════╗
║              🟢 READY FOR SUBMISSION 🟢                ║
╠════════════════════════════════════════════════════════╣
║  ✓ Robust memory management architecture               ║
║  ✓ Betty style compliance verified                     ║
║  ✓ Standard library constraints enforced               ║
║  ✓ Comprehensive error handling                        ║
║  ✓ Zero memory leaks in implementations                ║
║  ✓ All prototypes in main.h                            ║
╚════════════════════════════════════════════════════════╝
```

---

## 📚 KEY CONCEPTS TO MASTER

| Concept | Description |
|---------|-------------|
| **malloc()** | Allocate uninitialized memory from heap |
| **calloc()** | Allocate and initialize memory to zero |
| **realloc()** | Resize previously allocated memory |
| **free()** | Deallocate memory back to heap |
| **exit()** | Terminate program with status code |
| **NULL** | Invalid pointer value (allocation failure) |

---

## 🔐 IMPORTANT NOTES

- **No casting malloc()**: Modern C best practice - let compiler handle it
- **Error detection**: Always check for NULL after malloc/calloc
- **Memory leaks**: Free allocated memory when no longer needed
- **Exit codes**: Use meaningful codes (98 for allocation failures)
- **Header file**: Critical - all prototypes must be declared there

---

**Project Type**: Dynamic Memory Allocation
**Difficulty**: Intermediate
**Focus**: Memory Management, Error Handling, System Calls
**Language**: C (gnu89 standard)
**Status**: NEURAL LINK ACTIVE

---

*System initialized and ready for deployment*
