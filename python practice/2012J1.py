b, a = int(input()), int(input())
if a <= b:
    print("Congratulations, you are within the speed limit!")
else:
    if  abs(a - b) in range(1, 21):
        print(f"You are speeding and your fine is ${100}.")
    elif  abs(a - b) in range(21, 31):
        print(f"You are speeding and your fine is ${270}.")
    else:
        print(f"You are speeding and your fine is ${500}.")