def solution():
    n, m, k = map(int, input().split())
    nums = set(range(1, k+1))
    a = set(map(int, input().split()))
    b = set(map(int, input().split()))
    if ([num <= (k) for num in a]).count(True) >= (k/2) and ([num <= (k) for num in b]).count(True) >= (k/2) and len(nums.difference(a.union(b)))==0:
            return "YES"
    return "NO"

def main():        
    for _ in range(int(input())):
        print(solution())

main()