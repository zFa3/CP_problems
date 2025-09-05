def main():
    strength, num = tuple(map(int, input().split()))
    dragons = []
    for _ in range(num):
        dragons.append(tuple(map(int, input().split())))

    dragons.sort(key=lambda x:x[0])

    for i in dragons:
        if strength <= i[0]:
            print("NO"); return
        strength += i[1]
    print("YES"); return

main()