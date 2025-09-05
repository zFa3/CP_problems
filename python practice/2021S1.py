input(); a, b = list(map(int, input().split())), list(map(int, input().split()))
print(sum([(a[i] + a[i+1])/2*b[i] for i in range(len(b))]))