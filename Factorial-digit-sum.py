#aman kumar jha
import math

t=int(input())
for i in range(t):
    n=int(input())
    f=math.factorial(n)
    s=0
    while(f!=0):
        s=s+f%10
        f=f//10
    print((s))
