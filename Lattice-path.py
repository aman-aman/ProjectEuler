
import math
#aman kumar jha
mod=1000000007
t=int(input())
for i in range(t):
    a, b = map(int, input().split())
    print(int(((math.factorial(a+b))//(math.factorial(a)*math.factorial(b)))%mod))
