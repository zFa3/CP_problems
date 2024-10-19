#############################
# user: zFa3
# date: 10/18/24
# task: Amplitude Hackathon '23 Practice Problem 4 - Gigatron Autoscaling
#############################
a, b = map(int, input().split())
for _ in range(a):
    instruction = input().split()
    if instruction[0][0] == "D":
        b -= int(instruction[1])
    else:
        b += int(instruction[1])
    b = min(max(b, 1), 1024)
    print(b)
