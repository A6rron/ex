---

### **1. Tokens**  
Tokens are the smallest units in a C program and are classified into:  
- **Keywords**: Reserved words with predefined meanings (e.g., `int`, `return`).  
- **Identifiers**: Names used for variables, functions, arrays, etc.  
- **Constants**: Fixed values like `10`, `'A'`, `3.14`.  
- **Strings**: Sequence of characters enclosed in double quotes (`"Hello"`).  
- **Operators**: Symbols for operations (`+`, `-`, `*`, `/`).  
- **Special Symbols**: `{}`, `()`, `;`, `[]`, etc.  

---

### **2. Data Types**  
C has several data types categorized as follows:  
- **Primary Data Types**: `int`, `float`, `double`, `char`.  
- **Derived Data Types**: Arrays, Pointers, Structures, Unions.  
- **User-Defined Data Types**: `typedef`, `enum`.  
- **Void**: Represents no value or function returning nothing.  

---

### **3. Type Conversions**  
There are two types:  
1. **Implicit Type Conversion (Type Promotion)**  
   - Automatically done by the compiler.  
   - Example: `int a = 5.5; // a stores 5`  
2. **Explicit Type Conversion (Type Casting)**  
   - Manually done using `(type)`.  
   - Example: `float x = (float)5 / 2; // x = 2.5`  

---

### **4. Library Functions**  
C provides pre-defined functions in header files like:  
- **stdio.h** (e.g., `printf()`, `scanf()`).  
- **math.h** (e.g., `sqrt()`, `pow()`).  
- **string.h** (e.g., `strlen()`, `strcpy()`).  
- **stdlib.h** (e.g., `malloc()`, `free()`).  

---

### **5. Decision Statements**  
Used to make choices:  
- **if Statement**: Executes block if condition is true.  
  ```c
  if (x > 0) { printf("Positive"); }
  ```  
- **if-else Statement**: Executes one of two blocks.  
- **Nested if**: An `if` inside another `if`.  
- **switch Statement**: Selects from multiple cases.  
  ```c
  switch(x) { case 1: printf("One"); break; default: printf("Other"); }
  ```  

---

### **6. Loop Control Statements**  
Used for repetition:  
- **for loop**: Known iteration count.  
  ```c
  for (int i = 0; i < 5; i++) { printf("%d", i); }
  ```  
- **while loop**: Runs while condition is true.  
- **do-while loop**: Executes at least once.  

**Control Statements**:  
- `break`: Exits loop early.  
- `continue`: Skips iteration.  

---

### **7. Strings and Standard Functions**  
A string is a sequence of characters ending with `\0`.  
Common functions (`string.h`):  
- `strlen(str)`: Finds length.  
- `strcpy(dest, src)`: Copies string.  
- `strcat(s1, s2)`: Concatenates strings.  
- `strcmp(s1, s2)`: Compares strings.  

---

### **8. Pointers**  
A pointer stores the memory address of another variable.  
- Declaration: `int *p;`  
- Assigning: `p = &x;`  
- Accessing: `*p` gives value at address.  
- Used in arrays, functions, and dynamic memory.  

---

### **9. Recursion**  
A function that calls itself.  
Example: Factorial using recursion  
```c
int fact(int n) {  
   if (n == 0) return 1;  
   return n * fact(n - 1);  
}
```  

---

### **10. Call by Value and Reference**  
- **Call by Value**: Passes a copy of the variable. Changes don’t affect original.  
  ```c
  void fun(int x) { x = 10; }  
  ```  
- **Call by Reference**: Passes address, modifying original variable.  
  ```c
  void fun(int *x) { *x = 10; }  
  ```  

---

### **11. Enumerated Data Type (`enum`)**  
A user-defined data type that assigns names to integer constants.  
```c
enum Color { RED, GREEN, BLUE };  
enum Color c = RED;  
```  
Default values start from `0`, but can be changed.

---

### **12. Difference Between Structure and Union**  
| Feature  | Structure (`struct`) | Union (`union`) |
|----------|---------------------|-----------------|
| Storage  | Allocates memory for all members. | Shares memory among members. |
| Size     | Sum of all members’ sizes. | Size of the largest member. |
| Access   | All members can be accessed at once. | Only one member can be used at a time. |

Example:
```c
struct S { int a; float b; };  
union U { int a; float b; };  
```

---
