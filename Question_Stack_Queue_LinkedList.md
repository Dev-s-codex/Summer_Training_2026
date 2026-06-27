1. What is the worst-case time complexity to search for an element in a singly linked list?
[A] O(1) 
[B] O(\log n) 
[C] O(n) 
[D] O(n \log n)

Answer: O(n)

Paper: GATE CSE 2004

2. To concatenate two singly linked lists in $O(1)$ time, what pointer configuration is strictly required?
[A] A head pointer for the first list 
[B] A tail pointer for the first list 
[C] A tail pointer for the second list 
[D] It must be a doubly linked list

Answer: A tail pointer for the first list (and head pointer for the second).

Paper: GATE CSE 2009

3. Which data structure is mathematically best suited for polynomial addition and sparse matrix representation?
[A] Array 
[B] Linked List 
[C] Stack 
[D] Queue

Answer:Linked List

Paper: ISRO CS 2008

4. Can you efficiently perform a binary search on a standard sorted singly linked list?
[A] Yes, in O(\log n) time 
[B] No, it takes O(n)time 
[C] Yes, if the list is circular 
[D] Yes, in O(1)time

Answer: No.

Paper: GATE CSE 2001

5. What is the auxiliary space complexity of a recursive function that prints a linked list in reverse?
[A] O(1) 
[B] O(n) 
[C] O(\log n) 
[D] O(n^2)

Answer:(n)

Paper: GATE CSE 2006

6. What is the maximum number of pointers required to reverse a singly linked list iteratively?
[A] 1 
[B] 2 
[C] 3
[D] 4

Answer: 3 pointers (`prev`, `curr`, `next`).

Paper:GATE CSE 2010

7. In a circular doubly linked list of $n$ nodes, how many null pointers exist?
[A] 0 
[B] 1 
[C] 2
[D] n

Answer: 0

Paper: ISRO CS 2011

8. What is the time complexity to merge two sorted linked lists of lengths $m$ and $n$?
[A] O(m \times n) 
[B] O(m + n) 
[C] O(\min(m,n)) 
[D] O(1)

Answer: $O(m + n)$

Paper: GATE CSE 2003

9. What does the C-code snippet `p->next = p->next->next;` do in a singly linked list?
[A] Swaps adjacent nodes 
[B] Unlinks(skips)the node immediately following p 
[C] Causes a segmentation fault 
[D] Traverses to the end of the list

Answer:It unlinks (skips) the node immediately following `p`.

Paper: GATE CSE 2014

10. What is the main advantage of a doubly linked list over a singly linked list?
[A] Uses less memory 
[B] O(1) deletion of a given node 
[C] Faster insertion at the head 
[D] O(1) random search

Answer: O(1) deletion of a given node and bidirectional traversal.

Paper:ISRO CS 2016

11. Which linked list variation is utilized heavily by OS memory managers for the Buddy System allocation?
[A] Singly Linked List 
[B] Doubly Linked List 
[C] Circular Singly Linked List 
[D] Skip List

Answer: Doubly Linked List

Paper: GATE CSE 2018

12. When using the Tortoise and Hare algorithm, what does it mean if the fast and slow pointers become equal?
[A] The list is empty 
[B] The end of the list is reached 
[C] The linked list contains a cycle 
[D] The list is perfectly sorted

Answer: The linked list contains a cycle (loop).

Paper: GATE CSE 2012

13. In worst-case scenarios, how many traversals are needed to find the $k$-th node from the end of a linked list using the two-pointer approach?
[A] 1 pass 
[B] 2 passes 
[C] k passes 
[D] n passes

Answer:1 pass

Paper: NIELIT Scientist-B 2015

14. True or False: Traversing a singly linked list backwards iteratively without extra space is impossible in O(n) time.
[A] True (unless reversed first) 
[B] False, it can be done with a tail pointer 
[C] False, it can be done with a fast pointer 
[D] False, it can be done with standard loops

Answer: True (unless you physically reverse the list first).

Paper: GATE CSE 2002

15. If a node `N` is to be inserted after a node `P` in a singly linked list, what is the sequence of operations?
[A] P->next = N; N->next = P->next; 
[B] N->next = P->next; P->next = N; 
[C] N->next = P; P->next = N; 
[D] P->next = N;

Answer: `N->next = P->next; P->next = N;`

Paper: BARC 2014

16. What is the minimum number of nodes in a valid circular singly linked list?
[A] 1 (pointing to itself) 
[B] 2 
[C] 3 
[D] 0

Answer: 1 node (pointing to itself).

Paper: DRDO 2009

17. What is the maximum size of a stack required to evaluate a postfix expression containing N operands and operators?
[A] N 
[B] N/2+1 
[C] 2N 
[D] N-1

Answer: N/2 + 1 (conceptually, half the length).

Paper: GATE CSE 2012

18. Which data structure is optimal for checking the well-formedness of parentheses in a compiler?
[A] Queue 
[B] Stack 
[C] Array 
[D] Binary Tree

Answer: Stack

Paper: GATE CSE 2008

19. What graph traversal algorithm inherently mimics the behavior of a stack?
[A] Breadth First Search (BFS) 
[B] Depth First Search (DFS) 
[C] Level Order Traversal 
[D] Dijkstra's Algorithm

Answer: Depth First Search (DFS)

Paper: GATE CSE 2004

20. In what specific phase of a compiler is a stack data structure primarily utilized?
[A] Lexical Analysis 
[B] Syntax Analysis (Parsing) 
[C] Semantic Analysis 
[D] Code Optimization

Answer: Syntax Analysis (Parsing).

Paper: GATE CSE 2006

21. What is the result of the prefix expression * + 3 4 5?
[A] 27 
[B] 12 
[C] 35 
[D] 60

Answer: 35

Paper: GATE CSE 2015

22. Given three elements A, B, and C, how many valid stack permutations are possible?
[A] 4 
[B] 5 
[C] 6 
[D] 9

Answer:5

Paper: GATE CSE 2003

23. Which classic sorting algorithm relies heavily on stack space (implicitly or explicitly) for its recursive division?
[A] Merge Sort 
[B] Quick Sort 
[C] Heap Sort 
[D] Insertion Sort

Answer: Quick Sort

Paper: GATE CSE 2002

24. The classic Towers of Hanoi puzzle is mathematically modeled using which data structure?
[A] Queue 
[B] Call Stack 
[C] Priority Queue 
[D] Graph

Answer: Call Stack (Recursion)

Paper: GATE CSE 2011

25. If a stack of size 5 already contains 5 elements, pushing another element triggers what specific exception?
[A] Stack Overflow 
[B] Stack Underflow 
[C] Segmentation Fault 
[D] Buffer Resize

Answer: Stack Overflow

Paper: ISRO CS 2010

26. Can you access the bottom-most element of a stack in O(1) time without modifying the stack?
[A] Yes, using an array implementation 
[B] No 
[C] Yes, using a linked list implementation 
[D] Yes, using a pointer

Answer: No.

Paper: ISRO CS 2017

27. Converting an Infix expression to a Postfix expression requires which data structure?
[A] Stack 
[B] Queue 
[C] Tree 
[D] Graph

Answer: Stack

Paper: NIELIT 2016

28. An abstract stack operates on which access principle?
[A] FIFO 
[B] LIFO 
[C] LILO 
[D] Priority

Answer: LIFO (Last-In-First-Out)

Paper: BSNL TTA 2015

29. To evaluate an expression tree, which tree traversal method is used via a stack?
[A] Pre-order 
[B] In-order 
[C] Post-order 
[D] Level-order

Answer: Post-order Traversal

Paper: GATE CSE 2017

30. Which architecture explicitly uses a hardware stack to store subroutine return addresses?
[A] Von Neumann / Microprocessors 
[B] Harvard Architecture 
[C] RISC-V purely 
[D] GPU clusters

Answer: Von Neumann / Microprocessors (e.g., 8085)

Paper: GATE ECE 2005

31. What is the time complexity of a standard pop() operation?
[A] O(1) 
[B] O(n) 
[C] O(\log n) 
[D] O(n^2)

Answer:(1)

Paper: ISRO 2007

32. What condition defines an empty stack in an array implementation where `top` starts at -1?
[A] top == 0 
[B] top == -1 
[C] top == N 
[D] top == NULL

Answer: top == -1

Paper:BARC 2018

33. How many distinct stacks are required to implement a single bidirectional queue (Deque)?
[A] 1 
[B] 2 
[C] 3 
[D] 4

Answer: 2 stacks (amortized).

Paper:GATE CSE 2013

34. Which graph traversal algorithm is implemented using a Queue?
[A] Depth First Search (DFS) 
[B] Breadth First Search (BFS) 
[C] In-order Traversal 
[D] Post-order Traversal

Answer: Breadth First Search (BFS)

Paper: GATE CSE 2007

35. An abstract Queue operates on which access principle?
[A] FIFO 
[B] LIFO 
[C] FILO 
[D] Priority based

Answer: FIFO (First-In-First-Out)

Paper: ISRO CS 2009

36. What is the minimum number of Queues required to simulate a standard Stack
[A] 1 
[B] 2
[C] 3 
[D] 4

Answer: 2 queues

Paper:GATE CSE 2014

37. Which CPU scheduling algorithm relies strictly on a Circular Queue?
[A] First-Come-First-Serve 
[B] Shortest Job First 
[C] Round Robin Scheduling 
[D] Priority Scheduling

Answer: Round Robin Scheduling

Paper:GATE CSE 2012

38. The problem of "False Overflow" (where the rear is at the array limit but empty spaces exist at the front) is a limitation of what?
[A] Linear Array Queue 
[B] Circular Queue 
[C] Linked List Queue 
[D] Deque

Answer: Linear Array implementation of a Queue.

Paper: ISRO CS 2015

39. How do you solve the False Overflow problem in array queue?
[A] By creating a larger array 
[B] By using a Circular Queue 
[C] By using a Stack 
[D] By using a Priority Queue

Answer: By using a Circular Queue.

Paper: GATE CSE 2016

40. In a Priority Queue implemented using a Max-Heap, what is the time complexity to find (peek) the highest priority element?
[A] O(1) 
[B] O(\log n) 
[C] O(n) 
[D] O(n \log n)

Answer:O(1)

Paper: GATE CSE 2011

41. What is the time complexity to insert a new element into a Max-Heap based Priority Queue?
[A] O(1) 
[B] O(\log n) 
[C] O(n) 
[D] O(n \log n)

Answer: O(\log n)

Paper: GATE CSE 2009

42. Which data structure is used by Operating Systems for Print Spooling?
[A] Stack 
[B] Queue 
[C] Tree 
[D] Graph

Answer: Queue

Paper: ISRO CS 2014

43. A Deque allows insertion and deletion from where?
[A] Only the front 
[B] Only the rear 
[C] Both the front and the rear 
[D] The middle

Answer: Both the front and the rear.

Paper: NIELIT 2020

44. What condition checks if a circular queue of size N is completely full?
[A] rear == front 
[B] (rear + 1) % N == front 
[C] rear == N - 1 
[D] front == N

Answer: (rear + 1) % N == front`

Paper: GATE CSE 2006

45. Inter-process communication (IPC) via message buffers primarily utilizes which data structure?
[A] Stack 
[B] Queue 
[C] Hash Table 
[D] Graph

Answer: Queue

Paper: GATE CSE 2019

46. Which famous mathematical elimination problem is perfectly modeled using a Circular Queue?
[A] The Traveling Salesperson Problem 
[B] The Knapsack Problem 
[C] The Josephus Problem 
[D] The Dining Philosophers

Answer: The Josephus Problem

Paper: GATE CSE 2021

47. In a queue implemented via a singly linked list, which operation takes $O(n)$ if you only have a head pointer?
[A] Dequeue 
[B] Enqueue 
[C] Peek 
[D] IsEmpty

Answer: Enqueue (Insertion at the rear requires traversing to the end).
Paper: GATE CSE 2013

48. In Dijkstra's Shortest Path Algorithm, which data structure is used to fetch the next closest node?
[A] Stack 
[B] Circular Queue 
[C] Priority Queue (Min-Heap) 
[D] Deque

Answer: Priority Queue (Min-Heap)

Paper: GATE CSE 2005

49. An Output-Restricted Deque means what?
[A] Elements can be inserted at one end, and removed from both. 
[B] Elements can be inserted at both ends, but removed from only one end. 
[C] Elements can only be inserted and removed from one end. 
[D] Elements are restricted to the middle.

Answer:Elements can be inserted at both ends, but removed from only one end.

Paper:DRDO 2016

50. True or False: You can implement a priority queue using a standard unsorted array, though insertion will be O(1) and deletion O(n).
[A] True 
[B] False, insertion is O(n) 
[C] False, both are O(\log n) 
[D] False, it requires a linked list

Answer: True.

GATE CSE 2001

Q51. An input sequence 1 2 3 4 5 is passed through a stack.
Which of the following output sequences is NOT possible?
A) 2 1 4 3 5
B) 3 2 1 5 4
C) 3 1 2 5 4
D) 1 2 3 4 5
GATE CSE 2017 Set 1

Ans. Option C

A stack follows the Last In First Out (LIFO) principle.

Q52. A circular queue has size 8.
Initially Front = Rear = 0
Six insertions and four deletions are performed.After that, three more insertions are done.
What will be the position of Rear?
GATE CSE 2014 Set 2

Ans. Initially =0
After 6 insertions
Rear=6
After deletions
Rear remains 6
After 3 insertions
6→7→0→1
