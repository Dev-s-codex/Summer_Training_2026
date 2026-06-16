Q1. What is a variable in C/C++?

Ans. Variables are named locations which hold a value/data which can be retrieved,modified,etc.Example are int a; ,float x,y,z; ,etc.

Q2. Why do we use variables in programs?

Ans. Variables are used in programming to store, manipulate, and reuse data efficiently, acting as named containers for memory locations.

Q3. What is the difference between a variable name and its value?

Ans. A variable name is a symbolic identifier which is used to get to the storage locations, whereas the value is the actual data stored at that specific memory location.Values can change during execution but the location remains same.

Q4. Which of the following is a valid variable name? 

a) 2num 

b) total_marks 

c) for 

d) my marks

Ans. Option b is the correct as we cannot start with a number, cannot use a keyword, and cannot use space .

Q5. Why is Age different from age?

Ans. c/c++ is case sensitive language so Age and age are considered different variables hence having seperate memory locations.

Q6. Can a variable name contain spaces? Why?

Ans. No, variable names cannot contain spaces because the compiler treats spaces as separators between different tokens. Instead of spaces, underscores (_) are commonly used.

Q7. Can a variable name start with an underscore (_)?

Ans. Yes, a variable name can start with an underscore. However, it is generally recommended to use meaningful names for better readability.

Q8. What happens if two variables have the same name in the same scope?

Ans. The compiler generates an error because each variable within the same scope must have a unique name. Duplicate names create ambiguity for the compiler.

Q9. Write three meaningful variable names for storing student information.

Ans. char Name;  int RollNo;  float Marks;

Q10. Which naming convention is better and why: studentMarks or sm?

Ans. studentMarks is better because it is descriptive and easy to understand. Meaningful variable names improve code readability.

Q11. What is a data type?

Ans. A data type specifies the kind of data a variable can store.It also determines the amount of memory allocated.

Q12. Which data type is used to store whole numbers?

Ans. 'int' datatype is used to store whole numbers.

Q13. Which data type is used to store decimal values?

Ans. 'float' and 'double' datatype are use to store decimal values.

Q14. What is the difference between float and double?

Ans. Both store decimal numbers, but 'double' provides higher precision and can store more digits after the decimal point compared to 'float'. Therefore, 'double' is generally preferred when greater accuracy is required.

Q15. Which data type stores a single character?

Ans. The 'char' data type stores a single character.

Q16. Which data type stores True/False values?

Ans. The 'bool' data type stores logical values. It can contain only two values: true or false.

Q17. What data type is suitable for storing a person's name?

Ans. The 'string' data type is suitable because a name consists of multiple characters.

Q18. Predict the output: int age=18; cout<<age;

Ans. 18

Q19. Identify the data type: 25, 3.14, 'A', true.

Ans. 

     25 → int
     3.14 → double
     'A' → char
     true → bool

Q20. What happens if you store a decimal number in an int variable?

Ans. The decimal portion is discarded.For example, if int x = 9.6;, then x will store only 9.

Q21. What is the purpose of cin?

Ans. 'cin' is used to take input from the user during program execution.

Q22. What is the purpose of cout?

Ans. 'cout' is used to display output on the computer screen.

Q23. Which symbol is used with cin?

Ans. The extraction operator ">>" is used with 'cin'.

Q24. Which symbol is used with cout?

Ans. The insertion operator "<<" is used with 'cout'.

Q25. Explain: cin >> age;

Ans. This statement takes input from the user and stores it in the variable 'age'.

Q26. Explain: cout << age;

Ans. This statement displays the value stored in the variable 'age' on the screen.

Q27. What is the purpose of endl?

Ans. 'endl' is used to move the cursor to the next line. It also flushes the output buffer.

Q28. Write a statement to input a student's marks.

Ans. cin >> marks;

Q29. Write a statement to display 'Welcome to C++'.

Ans. cout << "Welcome to C++";

Q30. Predict the output: cout << 'Programming';.

Ans. Programming

Q31. What is an operator?

Ans. An operator is a special symbol used in programming to perform operations on variables and values. Operators help in carrying out tasks such as addition, subtraction,etc.

Q32. Which operator is used for addition?

Ans. The addition operator (+) is used to add two or more values together.

Q33. What is the result of 10 % 3?

Ans. 1

Q34. What is the result of 8 % 2?

Ans. 0

Q35. Which operator checks equality?

Ans. The equality operator (==) is used to compare two values and check whether they are equal. If both values are equal, it returns true; otherwise, it returns false.

Q36. What is the difference between = and == ?

Ans. The assignment operator (=) is used to assign a value to a variable, whereas the equality operator (==) is used to compare two values.

Q37. What is the result of 5 > 3?

Ans. The operator > checks whether the left value is greater than the right value.
Since 5 is greater than 3, the expression evaluates to: True(1).

Q38. What does && represent?

Ans. && is the Logical AND operator. It returns true only when both conditions are true. If either condition is false, the result becomes false.

Q39. What does || represent?

Ans. || is the Logical OR operator. It returns true if at least one condition is true.

Q40. What does ! represent?

Ans. ! is the Logical NOT operator. It reverses the logical value of an expression.The NOT operator is useful when the opposite condition is required.

Q44. What formula is used to calculate Simple Interest?

Ans.

    The formula for Simple Interest is:
     SI=100/P×R×T
     Where:
     P = Principal Amount
     R = Rate of Interest
     T = Time Period

Q46. Why is a temporary variable used while swapping two numbers?

Ans. A temporary variable is used to store the value of one variable temporarily so that it is not lost during the swapping process.

Q48. What formula is used to convert Celsius into Fahrenheit?

Ans. The temperature conversion formula is:

    F=9/5 C+32

Q49. What is the Fahrenheit value of 0°C?

Ans.
     
    F=9/5(0)+32
    F=32
    Therefore, the Fahrenheit value of 0°C is 32°F.
    This is the freezing point of water on the Fahrenheit scale.

Q50. Why can integer division give incorrect results in the Celsius-to-Fahrenheit program?

Ans. Integer division removes the decimal portion of the result. If the formula uses integers only, precision may be lost, leading to incorrect temperature conversion.
