def timeit(func):
    def inner(*args, **kwargs):
        import time as tm
        time1 = tm.perf_counter()
        func(*args, **kwargs)
        print(f"{format(tm.perf_counter() - time1, "0.2f")} seconds")
    return inner

@timeit
def BFS():
    a = set()
    x = int(input())
    for i in range(x):
        if i % 2 == 0:
            a.add(i)
    for i in a:
        if i % 14 == 0:
            print(i)
@timeit
def DFS():
    x = int(input())
    for i in range(x):
        if i % 2 == 0:
            if i % 14 == 0:
                print(i)

DFS()