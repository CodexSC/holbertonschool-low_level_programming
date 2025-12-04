# Doubly Linked Lists Project
┌──────────────┐     ┌──────────────┐     ┌──────────────┐
│     n: 98     │     │     n: 402   │     │    n: 1024    │
├──────────────┤     ├──────────────┤     ├──────────────┤
│   prev: NULL  │ ◀───│  prev: Node1 │ ◀───│  prev: Node2 │
├──────────────┤     ├──────────────┤     ├──────────────┤
│  next: Node2  │───▶│  next: Node3 │───▶│  next: NULL   │
└──────────────┘     └──────────────┘     └──────────────┘
      Node 1                Node 2                Node 3

                   ========  DOUBLY LINKED LISTS  ========

## 📚 Learning Objectives

By the end of this project, you should be able to explain clearly and
confidently:

### General

-   🔹 What a **doubly linked list** is\
-   🔹 How to **use**, **traverse**, and **manipulate** doubly linked
    lists\
-   🔹 How to find the right information independently (without Googling
    everything)

------------------------------------------------------------------------

## 📝 Requirements

### General

-   Allowed editors: **vi**, **vim**, **emacs**
-   All files will be compiled/interpreted on **Ubuntu 20.04 LTS**
-   All files must **end with a new line**
-   A **README.md** file is required at the root of the project
-   Your code must follow **Betty style**\
    (verified using `betty-style.pl` and `betty-doc.pl`)
-   ❌ **No global variables**
-   ❌ No more than **5 functions per file**
-   Allowed C standard library functions:\
    **malloc**, **free**, **printf**, **exit**
-   Example `main.c` files are provided for testing only;\
    the checker uses its own versions.
-   All function prototypes must be in **lists.h**
-   Don't forget to push your **header file**
-   All header files must be **include guarded**

------------------------------------------------------------------------

## 📦 Data Structure

Please use the following structure definition for all tasks:

``` c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

------------------------------------------------------------------------

## 🧠 What Is a Doubly Linked List?

A **doubly linked list** is a dynamic data structure made of nodes.\
Each node contains:

-   an integer (`n`)
-   a pointer to the **previous** node (`prev`)
-   a pointer to the **next** node (`next`)

This allows:

-   traversal **forward** and **backward**
-   efficient insertion/deletion at any point
-   more flexibility than singly linked lists

### 🔗 ASCII Visualization

    NULL <- [prev | n | next] <-> [prev | n | next] <-> [prev | n | next] -> NULL

Each arrow `<->` represents two-way navigation.

------------------------------------------------------------------------

## 🚀 Using Doubly Linked Lists

You will practice:

-   Adding nodes (at beginning, end, and specific positions)
-   Deleting nodes
-   Freeing an entire list safely
-   Getting the length of a doubly linked list
-   Traversing forward and backward
-   Accessing nodes by index

------------------------------------------------------------------------

## ✔️ You're Ready to Begin!

Follow each task carefully, test often, and rely on the header +
constraints.\
If you need help debugging, testing, or understanding any of the
functions, ask anytime.
