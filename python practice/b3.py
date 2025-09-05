string = input()
Max_len = 0

def count(array, string):
    count = 0
    for i in range(len(array)):
        if array[i:i+len(string)] == (string):
            count += 1
    return count
    
for i in range(len(string)):
    for j in range(len(string)):
        if j < i:
            if count(string, string[j:i]) > 1:
                Max_len = max(Max_len, len(string[j:i]))
print(Max_len)