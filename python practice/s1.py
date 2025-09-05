def check(a, b):
    if a == b or a == b[::-1]:
        return True
    return False
    
for _ in range(int(input())):
    input()
    alice = list(map(int, input().split()))
    bob = list(map(int, input().split()))
    if check(bob, alice):
        print("Bob")
    else:
        print("Alice")