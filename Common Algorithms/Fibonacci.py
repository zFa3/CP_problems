# imports 
import time as tm
import sys; sys.setrecursionlimit(30000)

def basic_fib_gen(n: int) -> int:
    if n == 1 or n == 2:
        return 1
    
    a = basic_fib_gen(n - 1)
    b = basic_fib_gen(n - 2)
    
    return a + b

fib = {}
def memoization_fib_gen(n: int) -> int:
    global fib
    if n == 1 or n == 2:
        return 1
    if n in fib:
        return fib[n]
    
    a = memoization_fib_gen(n - 1)
    b = memoization_fib_gen(n - 2)
    fib[n] = a + b
    
    return a + b

def tabulation_fib_gen(n: int) -> int:
    fib = [0 for _ in range(n+1)]
    fib[1] = fib[2] = 1
    for iterator in range(3, n+1):
        fib[iterator] = fib[iterator - 1] + fib[iterator - 2]
    return fib[n]

while 1:
    inp = int(input())
    
    time1 = tm.perf_counter()
    print(memoization_fib_gen(inp))
    print(f"{tm.perf_counter() - time1:0.2f} seconds", end = "\n\n")

'''
    time1 = tm.perf_counter()
    print(basic_fib_gen(inp))
    print(f"{tm.perf_counter() - time1:0.2f} seconds", end = "\n\n")

    time1 = tm.perf_counter()
    print(tabulation_fib_gen(inp))
    print(f"{tm.perf_counter() - time1:0.2f} seconds", end = "\n\n")
'''
