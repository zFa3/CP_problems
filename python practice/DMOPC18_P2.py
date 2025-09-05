def main():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    for i, t in enumerate(arr):
        if t != i + 1 and abs(t - i - 1) % k != 0:
            print("NO")
            return
    print("YES")
main()