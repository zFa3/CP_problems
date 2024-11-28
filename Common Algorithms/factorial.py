factorial = {}
def factorial_func(x):
    if x == 1:
        return 1
    if x in factorial:
        return factorial[x]
    factorial[x] = x * factorial_func(x - 1)
    
    return factorial[x]
print(factorial(int(input())))