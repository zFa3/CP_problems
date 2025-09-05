for _ in range(int(input())):
    vowels = "aeiou"
    string = ""
    for i in range(int(input())):
        string += vowels[i % 5]
    print("".join(sorted(string)))