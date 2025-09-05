d = int(input(""))
e = int(input(""))
w = int(input(""))

a_c, b_c = 0, 0
if d - 100 > 0:
    a_c += (d - 100) * 0.25
a_c += e * 0.15 + w * 0.2
if d - 250 > 0:
    b_c += (d - 250) * 0.45
b_c += e * 0.35 + w * 0.25

print(f"Plan A costs {a_c:0.2f}");print(f"Plan B costs {b_c:0.2f}")
if a_c > b_c: print("Plan B is cheapest.")
elif b_c > a_c: print("Plan A is cheapest.")
else: print("Plan A and B are the same price.")