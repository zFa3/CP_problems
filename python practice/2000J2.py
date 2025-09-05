numbers = {
    "0":"0",
    "1":"1",
    "6":"9",
    "8":"8",
    "9":"6"
}
def flip(x: int) -> int:
    non_flippable = set("23457")
    if len(non_flippable.difference(set(str(x)))) == 5:
        x = list(str(x))[::-1]
        new = []
        for i in x:
            new.append(numbers[i])
    try: return int("".join(new))
    except: return None
counter = 0
for i in range(int(input()), int(input())):
    if i == flip(i): counter += 1
print(counter)