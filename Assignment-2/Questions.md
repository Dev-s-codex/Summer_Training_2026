Q1. What is a conditional statement in programming?

Ans. Conditional Statement is a programming construct tha allows a computer to make choices based on whether a condition is True or False. It executes different blocks of data.if ,else-if,else keywords are used.

Q2. What does an if statement do?

Ans. An if statement is used in programming to make decisions.
It checks whether a condition is true or false. If the condition is true, the code inside the if statement runs.If the condition is false, that code is skipped.

Q3. What is the purpose of an else block?

Ans. An else block is used to specify what should happen when the condition in the if statement is false.The statement in else is executed as an alternative.

Q4. When is an else block executed?

Ans. else block is executed when the condition for the if block is false.

Q5. What is a Boolean expression?

Ans. A Boolean expression is an expression that evaluates to only one of two values:True,False. It is commonly used in decision-making to determine whether a particular condition is satisfied.

Q6. Write the syntax of a simple if statement.

Ans. if(cgpa >= 4.0)
{
    cout<<"You have Passed!";
}

Q7. What operator is commonly used to test equality?

Ans. '==' operator is used to test equality.

Q8. What does the modulus (%) operator return?

Ans. The Modulus operator returns the Remainder after dividing the Two numbers.

Q9. How can you check if a number is even?

Ans. we can check if the number is even using the if statement of (the number % 2 = 0).if the condition is satisfied then the number is Even.

Q10. How can you check if a number is odd?

Ans. We can check if the number is Odd using the if statement of (the number% 2 != 0).if the condition is satisfied the the number is Odd.

Q11. What is the purpose of else-if?

Ans. else-if is used to give more choises.first if is used for the first condition and then else-if for the later conditions then ending with else.using else-if we can give the program many different choices.

Q12. What is a nested if statement?

Ans. It is a condition inside a condition .A nested if statement is a if statement placed inside another if statement.The inner if statement is executed only if the condition of the outer if statement is true.

Q13. Can an if statement exist without an else?

Ans. Yes, an if statement can exist without an else statement.The else part is optional. if statement can be used alone when some code is to be executed only if a condition is true and do nothing when the condition is false.

Q14. What is the output when a false condition is tested in an if statement without else?

Ans. When the condition in an if statement is false and there is no else block, the statements inside the if block are not executed. The program simply skips them and continues after the if block.

Q15. What is the role of braces {} in C/C++ conditionals?

Ans. In C and C++, braces {} are used to group multiple statements into a single block. In conditional statements such as if, if-else, and switch, braces define which statements belong to that condition and only the computer only executes the statements for an if block ,the statements inside the braces.

Q16. What does > mean?

Ans. The > (greater than) operator is a relational operator used to compare two values.It checks whether the value on the left is greater than the value on the right.

Q17. What does < mean?

Ans. The < (Less than) operator is a relational operator used to compare two values.It checks whether the value on the left is Less than the value on the right.

Q18. What does >= mean?

Ans. The >= (greater than or equal to) operator is a relational operator used to compare two values.It checks whether the value on the left is greater than the value on the right,or equal to the value on the right.
If either condition is true, the result is true. otherwise, it is false.

Q19. What does <= mean?

Ans. The <= (less than or equal to) operator is a relational operator used to compare two values.It checks whether the value on the left is less than the value on the right,or equal to the value on the right.
If either condition is true, the result is true. otherwise, it is false.

Q20. What does != mean?

Ans. The != (not equal to) operator is a relational operator used to compare two values.
It is used to find if the two statements are not equal.

Q21. What is a switch statement?

Ans. switch is a conditional statement which allows a program to choose one block of code from multiple choices/blocks of code.It consists of case,default,break.It is generally used for long or many choice statements.

Q22. What is a case label in a switch statement?

Ans. case is a choice or a specific block of code which is fed into a switch statement .it can be executed when the condition is satisfied.

Q23. Why is break used in switch?

Ans. The break statement is used in a switch statement to terminate the current case and exit the switch block. Without break, the program continues executing the statements of the next cases even if their case labels do not match. This behavior is called fall-through.

Q24. What happens if break is omitted?

Ans. If the break is omitted than the program continues executing the statements of the next cases even if their case does not match the condition.

Q25. What is the default case in switch?

Ans. default case is the code/choice to be executed for the condition where no case is true or satisfies the condition then, the default case is run.

Q26. Can switch compare strings in C++?

Ans. No, switch cannot compare strings in c++. It can only work with integral data types such as int, char, and enum. For string comparisons, use if-else statements instead.

Q27. Which statement is better for many constant choices: if-else or switch?

Ans. For many constant choices, the switch statement is generally better than an if-else ladder. A switch statement makes the code more readable, organized, and easier to maintain.It also improves program clarity.

Q28. How do you test whether a value is positive?

Ans. A value is positive if it is greater than zero. This can be tested using the greater-than (>) operator.Using the condition: 

if(number > 0).

Q29. How do you test whether a value is negative?

Ans. A value is negative if it is less than zero. This can be tested using the less-than (<) operator.Using the condition:

if(number > 0).

Q30. How do you test whether a value is zero?

Ans. A value is zero if it is exactly equal to 0. The equality operator (==) is used for this purpose.Using the condition:

if(num == 0)

Q31. Write a condition to check if age is at least 18.

Ans. The conditon will be:

if(age >= 18)

Q32. Write a condition to check if marks are above 50.

Ans. The condition will be:

if(marks > 50)

Q33. What is decision making in programming?

Ans. Decision making is the process of selecting one action from multiple possible actions based on a condition. It allows a program to execute different statements depending on whether a condition is true or false.

Q34. Can nested if statements have multiple levels?

Ans. Yes, nested if statements can have multiple levels. An if statement can be placed inside another if statement, and this process can continue as needed.

Q35. What is logical AND (&&)?

Ans. The logical AND (&&) operator combines two or more conditions.When all the condition are true then only it will be true.if even one is false it will be false.

Q36. What is logical OR (||)?

Ans. The logical OR (||) operator returns true if at least one condition is true.

Q37. What is logical NOT (!)?

Ans. The logical NOT (!) operator reverses the result of a condition.
True becomes False
False becomes True
It is used to negate the contition.

Q38. How do you check if a year is divisible by 4?

Ans. To check if a year is divisible by 4 we use modulus to divide by 4 and check the remainder as 0.

if(year % 4 == 0)
{
    cout<<"Divisible by 4";
}

Q39. What is a leap year?

Ans. a year is a leap year if it is divisible by 4

if(year % 4 == 0)
{
    cout<<"It is a leap year.";
}

Q40. What is the first condition for a leap year?

Ans.The first condition for a leap year is, it should be divisible by 4.

Q41. How do you find the largest of two numbers?

Ans. Compare the two numbers using the greater-than operator.
if(a > b)
{
    cout<<"A is Largest";
}
else
{
    cout<<"B is Largest";
}

Q42. How do you find the largest of three numbers?

Ans. 

     if(a > b)
      {
        if(a > c)
        {
            cout<<"a is largest.";
        }
        else
        {
            cout<<"c is largest.";
        }
      }
     else
      {
        if(b > c)
        {
            cout << "B is largest.";
        }
        else
        {
            cout << "C is largest.";
        }
      }

Q43. What is an if-else-if ladder?

Ans. An if-else-if ladder is used to test multiple conditions one after another.

Q44. What is the difference between if and switch?

Ans.        if Statement	                                   switch Statement
Can test complex conditions	                          Tests only fixed values
Uses relational and logical operators	              Uses case labels
Suitable for ranges	                                  Suitable for multiple constant choices
More flexible	                                      More readable for many options

Q45. Can switch use ranges directly?

Ans. No, a switch statement cannot use ranges directly.
     Ranges should be handled using if-else statements.

Q46. What is fall-through in switch?

Ans. Fall-through occurs when a break statement is omitted. Execution continues into the next case even if it does not match the conditions.

Q47. What data type is usually used for conditions?

Ans. The bool (Boolean) data type is usually used for conditions.
It has only two values: true ,false

Q48. Why are conditional statements important?

Ans. Conditional statements are important because they allow programs to make decisions and execute different actions based on different situations.Without conditional statements, programs could not make decisions.

Q49. Give one real-life example of a conditional statement.

Ans.Travel example 

if(Money > 100)
{
    cout<<"Book a Taxi.";
}
else
{
    cout<<"Go by Walking.";
}

Q50. Name four conditional structures covered. 

Ans. The four common conditional structures are:

if statement
if-else statement
if-else-if ladder
switch statement