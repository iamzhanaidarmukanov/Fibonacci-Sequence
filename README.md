# Fibonacci-Sequence
The well-known Fibonacci sequence is: ğ¹ğ = ğ¹ğâ1 + ğ¹ğâ2 for ğ â¥ 2, ğ¹0 = 0, ğ¹1 = 1. Tom discovers that the Fibonacci number grows very quickly, for example ğ¹40 = 102334155. To make further discovery of the Fibonacci numbers, Tom takes the following steps:
1. Take the first ğ Fibonacci numbers (exclude F0) S1 ={F1, F2, ..., Fn}
2. Modulo each Fibonacci number by a positive integer Q, i.e. Ağ = ğ¹ğ % Q and
obtain a new sequence S2 ={A1, A2, ..., An }
3. Sort the numbers in S2 from small to large and obtain sequence S3
S2 ={A1,A2, ...,An } â S3 ={c1, c2, ..., cn }
4. For numbers in sequence S3, calculate the weighted sum modular Q


![image](https://user-images.githubusercontent.com/60174747/126137518-e31d4160-3db1-48b2-8704-b5c68332df17.png)


# **Input**
The input contains multiple test cases. The first line of the input is a number T (1 â¤ T â¤ 100), indicating the number of test cases. Each test case contains two integers n (2 â¤ n â¤ 5,000,000) and Q (2 â¤ Q â¤ 1000,000,000) in one line.

    4
    5 100
    5 3
    15 13
    5000000 1000000000


# **Output**
For each test case, print the weighted sum in a separate line.

    46
    2
    11
    973061125
