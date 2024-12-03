# π-day
# number of people
n = int(input())
# number of pies
k = int(input())

# memoization
m = dict()
def arrangements(n, k, p):
    # if we hit any base case, return 1
    if n == k or n == 1 or k == 1:
        return 1
    
    # if it has been already calculated then we can return our
    # previously answer
    if ((n, k, p) in m):
        return m[(n, k, p)]
    
    # otherwise we count the number of possibilities
    # which we can define as:
    #
    # i for p to n\\k ∑ arrangements(n = n - i, k = k - 1, p = i)
    total = 0
    for i in range(p, n//k + 1):
        total += arrangements(n - i, k - 1, i)
    
    # then return the total
    m[(n, k, p)] = total
    return m[(n, k, p)]

# print the answer
print(arrangements(n, k, 1))
