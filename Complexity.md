Q1. Determine the time complexity:

for(int i=0;i<n;i++)
{
    cout<<i;
}    

Ans. The loop runs from 0 to n−1.
n times

Q2. Determine the time complexity:

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<"*";
    }
}  

Ans. n*n = n^2

Q3. Determine the time complexity:

for(int i=0;i<n;i++)
{
    for(int j=0;j<i;j++)
    {
        cout<<"*";
    }
}

Ans. 
i=0 then 0 times
i=1 then 1 times
i=2 then 2 times
then,
i=n-1 then n-1 times
0+1+2+..+(n-1)=n(n-1)/2

so, time complexity will be o(n^2)

Q4. Determine the time complexity:

for(int i=1;i<n;i*=2)
{
    cout<<i;
}

Ans. O(log n)
Q5. Determine the time complexity:

for(int i=n;i>1;i/=2)
{
    cout<<i;
}

Ans. Number of divisions by 2 until reaching 1:
O(log n)
Q6. Determine the time complexity:

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=log(n);j++)
    {
        cout<<"*";
    }
}

Ans. n*logn
Q7. Determine the time complexity:

while(n>0)
{
    n--;
}

Ans. n decreases by 1 each iteration.
Iterations = n

Q8. Determine the time complexity:

while(n>1)
{
    n/=2;
}

Ans. Each iteration halves n.
Number of halvings: logn

Q9. Determine the time complexity:

for(int i=1;i<=n;i++)
{
}
for(int j=1;j<=n;j++)
{
}

Ans. n+n=2n

Q10. Determine the time complexity:

for(int i=1;i<=n;i++)
{
}
for(int j=1;j<=n*n;j++)
{
}

Ans. n+n^2

Q11

Determine the time complexity:

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n*n;j++)
    {
    }
}

Ans. n*n^2=n^3

Q12

Determine the time complexity:

for(int i=1;i<=n;i*=3)
{
}

Ans. O(log n)

Q13

Determine the time complexity:

for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i*i;j++)
    {
    }
}

Ans. n(n+1)(2n+1)/6
=O(n^3)

Q14

Determine the time complexity:

void fun(int n)
{
    if(n==0)
        return;

    fun(n-1);
}

Ans. T(n)=T(n-1)+1
=O(n)

Q15

Determine the time complexity:

void fun(int n)
{
    if(n<=1)
        return;

    fun(n/2);
}

Ans. T(n)=T(n/2)+1
=O(log n)

Q16

Determine the time complexity:

void fun(int n)
{
    if(n==0)
        return;

    fun(n-1);
    fun(n-1);
}

Ans. T(n)=2T(n-1)+1
=O(2^n)

Q17

Determine the time complexity:

int fib(int n)
{
    if(n<=1)
        return n;

    return fib(n-1)+fib(n-2);
}

Ans. T(n)=T(n-1)+T(n-2)+1
=O(2^n)

Q18

Determine the time complexity:

int fact(int n)
{
    if(n<=1)
        return 1;

    return n*fact(n-1);
}

Ans.  T(n)=T(n-1)+1
= O(n)

Q19

Determine the time complexity:

void fun(int n)
{
    if(n<=0)
        return;

    fun(n-1);

    cout<<n;
}

Ans. T(n)=T(n-1)+1
= O(n)

Q20

Determine the time complexity:

void fun(int n)
{
    if(n<=1)
        return;

    fun(n/2);

    cout<<n;
}

Ans. T(n)=T(n/2)+1
Time Complexity: O(log n)

Q21

Solve the recurrence relation:

T(n)=T(n-1)+1

Ans. T(n)=T(1)+n
= O(n)

Q22

Solve the recurrence relation:

T(n)=T(n-1)+n

Ans. T(n)=T(n-1)+n
= n(n+1)/2


Q23

Solve the recurrence relation:

T(n)=T(n/2)+1

Ans. T(n)=T(n/2)+1
O(log n)

Q24

Solve the recurrence relation:

T(n)=2T(n-1)+1
= O(2^n)

Ans. T(n)=2T(n-1)+1
Recursion tree doubles every level.

Q25

Solve the recurrence relation:

T(n)=T(n/2)+n

Ans. O(n)

Q26
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j*=2)
    {
    }
}

Determine the complexity.

Ans. =log(n!)
= O(n log n)

Q27
for(int i=1;i<=n;i*=2)
{
    for(int j=1;j<=n;j++)
    {
    }
}

Determine the complexity.

Ans. O(n log n)

Q28
for(int i=n;i>=1;i--)
{
    for(int j=i;j>=1;j--)
    {
    }
}

Determine the complexity.

Ans. n(n+1)/2
= O(n^2)

Q29
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j*=2)
    {
    }
}

Determine the complexity.

Ans. O(n log n)

Q30
void fun(int n)
{
    if(n<=1)
        return;

    fun(n/2);
    fun(n/2);
}

Determine the complexity.

Ans. T(n)=O(n)