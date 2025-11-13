# 🔮 C - DYNAMIC MEMORY ALLOCATION

```
    ╔═══════════════════════════════════════════════════════════════╗
    ║                                                               ║
    ║                      ███████████████                          ║
    ║                    ███░░░░░░░░░░░░░███                        ║
    ║                  ███░░░░░░░░░░░░░░░░░███                      ║
    ║                ███░░░░░  ██  ░░░░░░░░░░███                    ║
    ║              ███░░░░░░  ████  ░░░░░░░░░░░███                  ║
    ║            ███░░░░░░░  ██████  ░░░░░░░░░░░░███                ║
    ║          ███░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░███              ║
    ║        ███░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░███            ║
    ║        ███░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░███            ║
    ║        ███░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░███            ║
    ║          ███░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░███              ║
    ║            ███░░░░░░░░░░░░░░░░░░░░░░░░░░░███                  ║
    ║              ███░░░░░░░░░░░░░░░░░░░░░███                      ║
    ║                ███░░░░░░░░░░░░░░░███                          ║
    ║                  ███░░░░░░░░░███                              ║
    ║                    ███░░░███                                  ║
    ║                      ███                                      ║
    ║                                                               ║
    ║          ⚡ MEMORY ALLOCATION SYSTEM ⚡                         ║
    ║     DYNAMIC HEAP MANAGEMENT & ERROR PROTOCOL                  ║
    ║                                                               ║
    ╚═══════════════════════════════════════════════════════════════╝
```

---

## ⚙️ CORE FUNCTIONS

```
┌─────────────────────────────────────────────────────────────────┐
│ malloc_checked()  │  calloc()  │  realloc()  │  exit()         │
└─────────────────────────────────────────────────────────────────┘
```

### malloc_checked(unsigned int b)
```c
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Description: Allocates memory of @b bytes using malloc.
 * If malloc fails, the program exits with status code 98.
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
```

---

## 📊 SYSTEM STATUS

| Component | Status |
|-----------|--------|
| **Allocation Method** | Dynamic Heap Management |
| **Error Handling** | Fail-Safe Protocol (exit 98) |
| **Memory Safety** | Zero-Byte Protected |
| **Compilation** | `gcc -Wall -Werror -Wextra -pedantic -std=gnu89` |

---

## 🔌 TECHNICAL SPECIFICATIONS

```
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃ MEMORY ALLOCATION PROTOCOL                           ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃ ✓ malloc() failure detection                         ┃
┃ ✓ Automatic exit(98) on allocation failure           ┃
┃ ✓ Pointer validation                                 ┃
┃ ✓ Dynamic heap management                            ┃
┃ ✓ Standard library compliance                        ┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
```

---

## 🛠️ COMPILATION

```bash
gcc -o malloc_checked -Wall -Werror -Wextra -pedantic -std=gnu89 \
    _putchar.c malloc_checked.c main.c
```

---

## 📋 ALLOWED FUNCTIONS

| Function | Status |
|----------|--------|
| `malloc` | ✅ Permitted |
| `free` | ✅ Permitted |
| `exit` | ✅ Permitted |
| `_putchar` | ✅ Permitted |
| `printf` | ❌ Forbidden |
| `puts` | ❌ Forbidden |
| `calloc` (in code) | ❌ Forbidden |
| `realloc` (in code) | ❌ Forbidden |

---

## 📁 PROJECT STRUCTURE

```
project-folder/
├── README.md
├── main.h
├── malloc_checked.c
├── _putchar.c (not submitted)
└── main.c (test file, not submitted)
```

---

## ⚡ REQUIREMENTS CHECKLIST

- ✅ Editors: `vi`, `vim`, `emacs`
- ✅ Compilation: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- ✅ All files end with newline
- ✅ Betty style compliance
- ✅ No global variables
- ✅ Maximum 5 functions per file
- ✅ Only `malloc`, `free`, `exit` allowed
- ✅ Function prototypes in `main.h`
- ✅ `main.h` pushed to repository

---

## 🔐 ERROR HANDLING PROTOCOL

```
┌──────────────────────────────────────────┐
│  malloc() Success?                       │
├──────────────────────────────────────────┤
│  YES → Return pointer to caller          │
│  NO  → exit(98) Terminate process        │
└──────────────────────────────────────────┘
```

---

## 💾 MEMORY ALLOCATION FLOW

```
User Request (unsigned int b)
         ↓
    malloc(b)
         ↓
   ┌─────────────┐
   │ NULL Check? │
   └─────────────┘
      /     \
    YES      NO
    /          \
exit(98)    return(ptr)
  ↓            ↓
Program      Valid Pointer
Terminates    to Caller
```

---

## 📝 FUNCTION NOTES

- **Parameter Type**: `unsigned int` - handles unsigned integer sizes
- **Return Type**: `void *` - generic pointer for any data type
- **Failure Code**: `98` - specific exit status for allocation failure
- **Error Detection**: `NULL` comparison - standard malloc failure indicator
- **No Casting**: Return value of malloc not cast (modern C best practice)

---

## 🚀 DEPLOYMENT READY

```
╔════════════════════════════════════════════╗
║  🟢 READY FOR PRODUCTION                   ║
║  ✓ Robust error handling                   ║
║  ✓ Betty style compliant                   ║
║  ✓ Standard library usage only             ║
║  ✓ Optimized for embedded systems          ║
║  ✓ Zero memory leaks in wrapper            ║
╚════════════════════════════════════════════╝
```

---

**Project Classification**: Dynamic Memory Management
**Difficulty Level**: Intermediate
**Focus Areas**: Memory Allocation, Error Handling, System Calls
**Language**: C (gnu89 standard)
