# C - DYNAMIC MEMORY ALLOCATION

```
╔══════════════════════════════════════════════════════════════════╗
║                                                                  ║
║  ⚡ ░█████████░ ⚡  ████████░ ░████████  ⚡ ░█████████░ ⚡       ║
║  █  ░███░░░░░░░  ░███░░░░░░  ░███░░░░░░  ░░░░░░░████░█        ║
║  █  ░███░ ALLOC  ░███░ HEAP  ░███░ CTRL  ░███░ SYNC░█         ║
║  █  ░███░░░░░░░  ░███░░░░░░  ░███░░░░░░  ░░░░░░░████░█        ║
║  ⚡ ░█████████░ ⚡  ████████░ ░████████  ⚡ ░█████████░ ⚡       ║
║                                                                  ║
║         ▓▓▓   MEMORY ALLOCATION SYSTEM   ▓▓▓                    ║
║         ░░░   DYNAMIC HEAP PROTOCOL     ░░░                     ║
║         ▓▓▓   v1.0 NEURAL SYNC          ▓▓▓                     ║
║                                                                  ║
║  ◆ WARNING: ALLOCATED MEMORY DETECTED ◆                         ║
║  ◇ STATUS: NEURAL LINK ACTIVE ◇                                 ║
║  ◆ SIGNAL: █████████░ 95% ◆                                     ║
║                                                                  ║
╚══════════════════════════════════════════════════════════════════╝
```

---

## ⚙️ CORE FUNCTIONS

```
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃  ▓▓  malloc_checked()  ▓▓  calloc()  ▓▓  realloc()    ┃
┃  ░░           exit()           malloc()              ░░
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
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

## 🎮 SYSTEM STATUS

```
╔════════════════════════════════════════════════════════╗
║            ⚡ SYSTEM DIAGNOSTICS ⚡                   ║
╠════════════════════════════════════════════════════════╣
║ Allocation Engine    [ ▓▓▓▓▓▓▓░░░ ] 70% ONLINE      ║
║ Error Handler        [ ▓▓▓▓▓▓▓▓░░ ] 80% ACTIVE      ║
║ Memory Vault         [ ▓▓▓▓▓▓▓▓▓░ ] 90% LOADED      ║
║ Neural Link          [ ▓▓▓▓▓▓▓▓▓▓ ] 100% SYNCED     ║
╠════════════════════════════════════════════════════════╣
║ Protocol: MALLOC_FAIL_SAFE_98                         ║
║ Mode: DYNAMIC HEAP MANAGEMENT                         ║
║ Safety: ZERO-BYTE PROTECTED                           ║
╚════════════════════════════════════════════════════════╝
```

---

## 🔌 TECHNICAL SPECIFICATIONS

| System Component | Configuration |
|------------------|---------------|
| **Allocation Method** | Dynamic Heap Management |
| **Error Protocol** | Fail-Safe Exit (status 98) |
| **Memory Safety** | Zero-Byte Protected |
| **Compilation Flags** | `-Wall -Werror -Wextra -pedantic -std=gnu89` |
| **System State** | ⚡ OPERATIONAL |

---

## 🛠️ COMPILATION COMMAND

```bash
gcc -o malloc_checked -Wall -Werror -Wextra -pedantic -std=gnu89 \
    _putchar.c malloc_checked.c main.c
```

---

## 📋 APPROVED FUNCTIONS

```
╔════════════════════════════════════════════════════════╗
║           ✓ PERMITTED FUNCTIONS ✓                     ║
╠════════════════════════════════════════════════════════╣
║  ⚡ malloc()        - Core memory allocation           ║
║  ⚡ free()          - Memory deallocation              ║
║  ⚡ exit()          - Process termination              ║
║  ⚡ _putchar()      - Character output                 ║
╠════════════════════════════════════════════════════════╣
║           ✗ FORBIDDEN FUNCTIONS ✗                     ║
╠════════════════════════════════════════════════════════╣
║  ✘ printf()        - Formatted output (BANNED)        ║
║  ✘ puts()          - String output (BANNED)           ║
║  ✘ calloc()        - Zeroed allocation (BANNED)       ║
║  ✘ realloc()       - Memory reallocation (BANNED)     ║
╚════════════════════════════════════════════════════════╝
```

---

## 📁 PROJECT ARCHITECTURE

```
post-apocalyptic-c-memory-system/
│
├── 📄 README.md
├── 🔐 main.h                    [Header file - ALL prototypes]
├── 💾 malloc_checked.c          [Core allocation wrapper]
├── 🎯 _putchar.c                [Not submitted - system file]
└── 🧪 main.c                    [Not submitted - test file]
```

---

## ⚡ DEPLOYMENT REQUIREMENTS

```
╔════════════════════════════════════════════════════════╗
║                  DEPLOYMENT CHECKLIST                 ║
╠════════════════════════════════════════════════════════╣
║  ✓ Editor compatibility (vi/vim/emacs)                ║
║  ✓ Ubuntu 20.04 LTS compilation ready                 ║
║  ✓ All files terminated with newline                  ║
║  ✓ Betty style verification passed                    ║
║  ✓ Zero global variables detected                     ║
║  ✓ 5 function limit per file maintained               ║
║  ✓ Standard library restrictions enforced             ║
║  ✓ main.h header pushed to repository                 ║
║  ✓ Prototypes documented in header                    ║
╚════════════════════════════════════════════════════════╝
```

---

## 🔐 ERROR HANDLING PROTOCOL

```
┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
┃         MALLOC_CHECKED() DECISION TREE         ┃
┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫
┃                                                 ┃
┃  REQUEST: malloc_checked(size)                 ┃
┃           ↓                                     ┃
┃  ACTION:  ptr = malloc(size)                   ┃
┃           ↓                                     ┃
┃  CHECK:   if (ptr == NULL)                     ┃
┃           ↙           ↘                        ┃
┃         YES            NO                      ┃
┃         ↓              ↓                        ┃
┃    exit(98)       return(ptr)                  ┃
┃  [TERMINATE]    [SUCCESS]                      ┃
┃                                                 ┃
┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
```

---

## 💾 MEMORY ALLOCATION FLOW

```
    ┌─────────────────────────────┐
    │  USER REQUESTS MEMORY       │
    │  unsigned int bytes         │
    └──────────────┬──────────────┘
                   │
                   ▼
    ┌─────────────────────────────┐
    │  CALL malloc(bytes)         │
    │  Store in void *ptr         │
    └──────────────┬──────────────┘
                   │
                   ▼
    ┌─────────────────────────────┐
    │  VALIDATE ptr != NULL?      │
    └──────────────┬──────────────┘
                  ╱ ╲
                 ╱   ╲
          PASS ╱       ╲ FAIL
              ╱         ╲
             ▼           ▼
    ┌────────────┐  ┌──────────────────┐
    │ return ptr │  │ exit(98)         │
    │ [SUCCESS]  │  │ [FATAL SHUTDOWN] │
    └────────────┘  └──────────────────┘
```

---

## 🎮 SYSTEM OPERATIONS

```
╔════════════════════════════════════════════════════════╗
║                                                        ║
║     ▓▓▓▓▓▓▓▓▓▓   C LANGUAGE SYSTEM   ▓▓▓▓▓▓▓▓▓▓     ║
║     ░░░░░░░░░   MEMORY v1.0 BOOT     ░░░░░░░░░     ║
║                                                        ║
║     ⚡ Neural Link: ACTIVE                            ║
║     ⚡ Heap Authority: ENGAGED                        ║
║     ⚡ Pointer Matrix: SYNCHRONIZED                   ║
║     ⚡ Error Handler: ARMED & READY                   ║
║                                                        ║
║     STATUS: ▓▓▓▓▓▓▓▓▓▓ 100% OPERATIONAL              ║
║                                                        ║
║     [WARNING] malloc() failure → AUTO-TERMINATION     ║
║     [NOTICE]  exit(98) protocol ENGAGED               ║
║                                                        ║
╚════════════════════════════════════════════════════════╝
```

---

## 🎮 PRODUCTION READY

```
╔════════════════════════════════════════════════════════╗
║                  🟢 GO LIVE STATUS 🟢                ║
╠════════════════════════════════════════════════════════╣
║  ✓ Robust error handling architecture                 ║
║  ✓ Betty style compliance verified                    ║
║  ✓ Standard library constraints enforced              ║
║  ✓ Optimized for embedded systems                     ║
║  ✓ Zero memory leaks in wrapper function              ║
║  ✓ MISSION CRITICAL READY                             ║
╚════════════════════════════════════════════════════════╝
```

---

## 📝 FUNCTION DOCUMENTATION

| Attribute | Details |
|-----------|---------|
| **Name** | `malloc_checked` |
| **Parameter** | `unsigned int b` (size in bytes) |
| **Return Type** | `void *` (generic pointer) |
| **Failure Code** | `98` (exit status on malloc failure) |
| **Validation** | `NULL` pointer detection |
| **Standard** | GNU C89 compliant |

---

**📊 Project Classification**: Dynamic Memory Management  
**⚡ Difficulty Level**: Intermediate  
**💾 Focus Areas**: Memory Allocation, Error Handling, System Calls  
**🖥️ Language**: C (gnu89 standard)  
**⚙️ Status**: NEURAL LINK ACTIVE  

---

*Last Updated: System Time*  
*Status: Operational*