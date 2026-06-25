Q1. Given:
T(n) = T(n/2) + T(2n/5) + 7n
T(0) = 1
Determine the asymptotic complexity of T(n).

Ans. n/2 + 2n/5 = 5n+4n/10 = 9n/10
the total size decreases at every level by a factor of 9/10.
7n,7n(9/10​),7n(9/10​)^2,...
=70n
T(n)=Θ(n)
= Θ(n)

Q2. For constants a ≥ 1 and b > 1:
T(n) = aT(n/b) + f(n)
Under what conditions will: T(n) = Θ(n log n) hold?

Ans. a=b and f(n)=Θ(n)

Q3. An algorithm checks whether an array of size N is sorted by making a single pass and comparing only adjacent elements.What is the tightest asymptotic running time?

Ans. (N-1)
T(N)=c(N-1)
= Θ(N)

Q4. Evaluate the asymptotic order of:
1³ + 2³ + 3³ + ... + n³
Which of the following are true?
Θ(n⁴)
Θ(n⁵)
O(n⁵)
Ω(n³)
Choose all correct options.

Ans. Θ(n⁴),,O(n⁵),Ω(n³)

Q5. 
int fun1(int n)
{
    int i,j,k,p,q=0;
    for(i=1;i<n;++i)
    {
        p=0;
        for(j=n;j>1;j=j/2)
            ++p;
        for(k=1;k<p;k=k*2)
            ++q;
    }
    return q;
}
Find the asymptotic value of q.

Ans. Θ(nloglogn)

Q6. Determine the complexity:
for(int i=n;i>0;i/=2)
{
    for(int j=0;j<i;j++)
    {
        // constant work
    }
}

Ans. geometric series = 2n
therefore, Θ(n)

Q7. Determine the complexity:
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        // constant work
    }
}

Ans. = Θ(n²)

Q8. Determine the complexity:
void fun(int n)
{
    if(n<=1)
        return;
    fun(n/2);
    fun(n/2);
}

Ans. T(n)=2T(n/2)+1
= Θ(n)

Q9. Determine the complexity:
int fib(int n)
{
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}

Ans. T(n)=T(n−1)+T(n−2)+1
Θ(φⁿ)

Q10. Arrange the following in increasing order:
n^(3/2)
n log n
n^(log₂ n)
2^n

Ans. nlogn < n^3/2 < n^log₂n < 2ⁿ

Q11. Determine:
T(n)=T(n-1)+1

Ans. T(n)=T(n−2)+2
= T(n−3)+3
= Θ(n)

Q12. Determine:
T(n)=T(n-1)+n

Ans. T(n)=1+2+3+⋯+n
= Θ(n²)

Q13. Determine:
T(n)=2T(n-1)+1

Ans. Θ(2ⁿ)

Q14. Determine:
T(n)=T(n/2)+1

Ans. T(n)=T(n/2)+1
=T(n/4)+2
=T(n/8)+3
= ​​Θ(logn)​

Q15. Determine:
for(int i=1;i<=n;i*=2)
{
    for(int j=1;j<=n;j++)
    {
    }
}

Ans. Θ(nlogn)