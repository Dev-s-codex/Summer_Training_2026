Q1. malloc() is declared in which header file?

Ans. stdlib.h
malloc() (Memory Allocation) is a standard C library function. It is declared in the standard library header <stdlib.h>

Q2. Which function initializes all allocated bytes to zero?

Ans. calloc()
While malloc() leaves allocated memory with random garbage values, calloc() (Contiguous Allocation) automatically zeroes out all the allocated bytes

Q3. Which function can increase or decrease the size of previously allocated memory?

Ans. realloc()
realloc() changes the size of a previously allocated memory block without losing the existing data

Q4. Which operator is used for dynamic memory allocation in C++?

Ans. new
It is a built-in operator to allocate memory dynamically. It is preferred over malloc because it is type-safe and automatically calls constructors.

Q5. Memory allocated using new resides in?

Ans. Heap
All dynamic memory allocations (via new, malloc, etc.) are carved out of a large, unorganized pool of memory known as the Heap.

Q6. Local variables are usually stored in?

Ans. Stack
Variables declared inside functions (local variables) are managed automatically using a Stack frame structure. They are created when the function is called and destroyed when it exits.

Q7. Which statement correctly deallocates an array allocated using new?

Ans. delete[] arr;
When you allocate an array using new[],you must use the square bracket version of delete (delete[]) so the compiler knows to clean up the entire array and call destructors for all elements.

Q8. Which statement is true regarding malloc()?

Ans. Returns void*
malloc() allocates a raw block of bytes and returns a generic pointer (void*), which must be cast to the appropriate type.

Q9. Which statement is true regarding new?

Ans. Calls constructor
Unlike malloc(), the new operator allocates memory and immediately initializes the object by invoking its constructor.

Q10. Memory leak occurs when

Ans. Allocated memory is never released
If you dynamically allocate memory on the heap and lose the pointer to it without freeing/deleting it, that memory remains locked and unusable by the system, creating a leak.

Q11. Which pointer refers to already deallocated memory?

Ans. Dangling pointer
A pointer becomes "dangling" if it still holds the memory address of an object or variable that has already been deleted or freed.

Q12. Which pointer is never initialized?

Ans. Wild pointer
A wild pointer is a pointer variable that was declared but never initialized to a valid address or nullptr. It points to a completely random (garbage) location in memory.

Q13. Which is true about nullptr in C++?

Ans. It is a type-safe null pointer
Introduced in C++11, nullptr has its own distinct type (std::nullptr_t). It replaces the old macro NULL (which was just the integer 0), eliminating type ambiguities during function overloading.

Q14. Which memory allocation is generally faster?

Ans. Stack allocation
Stack allocation is incredibly fast because it only requires moving the stack pointer. Heap allocation requires searching for a free block of memory and managing tracking overhead, making it significantly slower.

Q15. Which memory is automatically reclaimed after a function returns?

Ans. Stack
The stack frame of a function is popped off the stack entirely when the function finishes, instantly reclaiming all local memory automatically.

Q16. What happens if delete is applied twice to the same pointer?

Ans. Undefined behavior
Deleting a pointer twice (a "double free") corrupts the memory management structures of the heap, leading to unpredictable crashes, security vulnerabilities, or undefined behavior.

Q17. Which memory region commonly suffers from fragmentation?

Ans. Heap
Because heap memory blocks are allocated and freed at arbitrary times in unpredictable sizes, the heap eventually gets peppered with alternating gaps of used and free space.

Q18. Which fragmentation occurs because free memory is scattered in small blocks?

Ans. External fragmentation
External fragmentation is when total free memory space exists to satisfy an allocation request, but it is split up into tiny, non-contiguous pockets scattered across the heap, meaning a single large request cannot be granted.

Q19. Which fragmentation occurs due to unused space inside an allocated block?

Ans. Internal fragmentation
Internal fragmentation happens when memory allocation engines round up a requested block size to fit alignment standards (e.g., asking for 5 bytes but being assigned 8 bytes). The 3 extra bytes are wasted inside that allocated block.

Q20. Which of the following uses dynamic memory internally?

Ans. All of these
Standard Template Library (STL) containers like std::vector, std::string, and std::list manage dynamically resized arrays or nodes behind the scenes on the heap, shielding developers from raw memory mechanics.

Q21. Stack follows which allocation strategy?

Ans. LIFO
The stack operates strictly on a Last-In, First-Out basis. The last function called is the first one to finish and be removed from memory.

Q22. Heap memory generally supports

Ans. Dynamic allocation
The heap exists entirely to allow blocks of memory to be allocated and deallocated flexibly at runtime in any arbitrary order.

Q23. Which situation may cause stack overflow?

Ans. Infinite recursion
Because each function call pushes a new frame onto the stack, a recursive function without a proper base case will keep stacking frames until it completely runs out of assigned stack memory, causing a crash.

Q24. Recursive functions primarily consume

Ans. Stack memory
Every time a function calls itself, execution state parameters and local variables are pushed onto the stack.

Q25. What is printed conceptually by int *p = new int; cout << p;?

Ans. Address of allocated heap memory
Printing the pointer variable itself (p) outputs the actual hexadecimal memory address on the heap where the new integer was allocated.

Q26. What is printed by int x=10; int *p=&x; cout<<*p;?

Ans. 10
The asterisk (*) is the dereference operator. Writing *p tells the program to fetch the actual value stored at the address held by p, which is the value of x (10).

Q27. Which operator returns the address of a variable?

Ans. &
The ampersand (&) is the "address-of" operator. It returns the memory location of whatever variable it is placed in front of.

Q28. Which operator accesses value stored at an address?

Ans. *
The asterisk (*) acts as the dereference operator when applied to an existing pointer, pulling the data out of that memory location.

Q29. Which is true about delete p;?

Ans. It deletes heap memory pointed by p
It frees up the memory block on the heap that p targets. It does not erase the pointer variable p itself from the stack, nor does it automatically reset p to nullptr

Q30. Can free() be safely used on memory allocated using new?

Ans. No, it is undefined behavior
You must never mix memory management schemes. new must be paired with delete, and malloc() must be paired with free(). Mixing them triggers undefined behavior because their underlying management engines are different.

Q31. Can delete be safely used on memory allocated using malloc()?

Ans. No, it is undefined behavior
You must never mix memory management schemes delete expects a pointer allocated by new , which a malloc block lacks.

Q32. Which memory allocation happens at runtime?

Ans. Dynamic allocation
Dynamic allocation happens entirely on the fly while the program is actively executing.

Q33. Which memory allocation size is usually fixed before program execution?

Ans. Static allocation
Static (or compile-time) allocation fixes the sizes of global arrays and standard local variables long before the code actually begins running.

Q34. Which of the following typically requires a pointer to access allocated memory?

Ans. All of these
Because malloc(), calloc(), and new dynamically fetch chunks of memory anonymously from the heap, the only way to track, read, or manipulate that memory is by storing its return address inside a pointer.

Q35. Which language introduced new/delete operators for object allocation?

Ans. C++
C++ introduced these operators to smoothly support Object-Oriented Programming (OOP) requirements, ensuring object construction and destruction are tied safely to memory lifetimes.

Q36. Static binding is also known as

Ans. Early binding
In static binding, the compiler matches function calls with their definitions before the program runs (at compile-time).

Q37. Dynamic binding is also known as

Ans. Late binding
In dynamic binding, the resolution of which function to execute is deferred until the application is actively running (runtime), usually handled via pointers/references.

Q38. Virtual functions in C++ use

Ans. Late binding
The virtual keyword tells the C++ compiler to skip early binding and instead use a Virtual Method Table (vtable) lookup at runtime to figure out the exact derived class method to run.

Q39. Function overloading is an example of

Ans. Compile-time polymorphism
The compiler checks the argument signatures of overloaded functions and determines exactly which function to execute during compilation.

Q40. Function overriding with virtual functions is an example of

Ans. Runtime polymorphism
Overriding allows a derived class to provide a specific implementation of a method that is already provided by its base class, resolved at runtime based on the actual object type.

Q41. Which architecture stores instructions and data in the same memory?

Ans. Von Neumann architecture
The Von Neumann architecture shares a single physical memory space and bus system to hold both execution instructions (code) and program data.

Q42. Which architecture separates instruction memory and data memory?

Ans. Harvard architecture
The Harvard architecture physically splits storage and pathways for data and instructions, allowing the CPU to read both code commands and data variables simultaneously.

Q43. Heap memory is managed mainly by

Ans. Runtime system and operating system support
The underlying language runtime (like C++'s memory manager) requests large memory pools from the host Operating System kernel and handles splitting it up for the program's heap allocations.

Q44. Which STL container performs dynamic memory allocation automatically?

Ans. vector
Standard Template Library (STL) containers like std::vector, std::string, and std::list manage dynamically resized arrays or nodes behind the scenes on the heap, shielding developers from raw memory mechanics.

Q45. Smart pointers were introduced to help solve

Ans. Memory leak and ownership issues
Smart pointers wrap around clean raw pointers using Resource Acquisition Is Initialization (RAII) idioms to automatically call delete when they fall out of scope, eradicating manual tracking bugs.

Q46. Which smart pointer allows only one owner?

Ans. unique_ptr
A std::unique_ptr maintains strict, exclusive ownership of its managed heap object. No other smart pointer can copy or share it.

Q47. Which smart pointer allows multiple owners?

Ans. shared_ptr
std::shared_ptr tracks usage via an internal reference counter. Multiple shared_ptr instances can map to the exact same heap memory object; the resource is wiped only when the final counter drops to zero.

Q48. Which smart pointer cannot be copied?

Ans. unique_ptr
Because it enforces strict sole ownership, its copy constructor and copy assignment operators are explicitly deleted. It can only be moved.

Q49. Which smart pointer helps observe shared_ptr without owning it?

Ans. weak_ptr
A std::weak_ptr holds a non-owning reference to an object managed by a shared_ptr. It does not increase the reference counter, preventing cyclical reference dependency lockups.

Q50. Which one is NOT a disadvantage of Dynamic Memory Allocation?

Ans. Flexible memory usage
Flexible memory usage is the primary advantage of dynamic memory allocation, allowing programs to adapt dynamically to incoming workloads instead of operating under rigid constraints.