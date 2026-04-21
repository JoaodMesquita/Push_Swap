*This project has been created as part of the 42 curriculum by **joapedro**.*

# 🔢 Push Swap – 42 Project

## 📖 Description

**Push Swap** is an algorithmic project from the 42 curriculum focused on sorting data efficiently using a limited set of operations and two stacks.

The objective is to sort a list of integers using:

* **Stack A** (initial stack with unsorted numbers)
* **Stack B** (auxiliary stack)

You are only allowed to use a predefined set of operations (swap, push, rotate, reverse rotate), making this project a challenge in both **algorithm design** and **optimization**.

This implementation uses the Radix Sort algorithm (binary-based), which is well-suited for handling large datasets efficiently within the project constraints.

---

## ⚙️ Instructions

### 🛠️ Compilation

Clone the repository and compile the project:

```bash id="5h9ztr"
git git@github.com:JoaodMesquita/Push_Swap.git
cd push_swap
make
```

This will generate:

* `push_swap`

(Optional, if implemented)

* `checker`

---

### 🚀 Usage

```bash id="ycmq8n"
./push_swap <list_of_integers>
```

### ▶️ Example

```bash id="z8t9b1"
./push_swap 3 2 5 1 4
```

This will output a sequence of operations that sorts the numbers.

---

### 🔍 Checker (if implemented)

```bash id="g1y2kp"
./checker <list_of_integers>
```

Then provide the operations via standard input:

```bash id="7px3x0"
./push_swap 3 2 1 | ./checker 3 2 1
```

Output:

* `OK` if correctly sorted
* `KO` if not

---

## 🔄 How It Works (Radix Sort Approach)

1. Normalize the input values (map them to indices).
2. Convert numbers to binary representation.
3. Iterate through each bit (from least significant to most significant).
4. For each number:

   * If the current bit is `0` → push to stack B (`pb`)
   * If the current bit is `1` → rotate stack A (`ra`)
5. Move all elements back from stack B to stack A (`pa`)
6. Repeat until all bits are processed

This method ensures efficient sorting with a predictable number of operations.

---

## 🔧 Allowed Operations

* `sa`, `sb`, `ss` – swap the top elements
* `pa`, `pb` – push between stacks
* `ra`, `rb`, `rr` – rotate (shift up)
* `rra`, `rrb`, `rrr` – reverse rotate (shift down)

---

## ⚠️ Notes

* Input must not contain duplicates.
* Only valid integers are accepted.
* Error handling is required (invalid input, overflow, etc.).
* Performance is evaluated based on the number of operations.

---

## 📚 Resources

### Sorting Algorithms

* https://en.wikipedia.org/wiki/Radix_sort
* https://www.geeksforgeeks.org/radix-sort/

### Stack Concepts

* https://www.geeksforgeeks.org/stack-data-structure/

### Bitwise Operations

* https://www.learn-c.org/en/Bitmasks

### Debugging & Testing

* `valgrind`
* Custom testers (push_swap visualizers)
