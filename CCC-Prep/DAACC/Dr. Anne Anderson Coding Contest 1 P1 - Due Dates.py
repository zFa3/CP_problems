currentDay = int(input())
dueDate = int(input())
if dueDate - currentDay < 0:
    print("relaxed")
elif dueDate - currentDay < 2:
    print("stressed")
else:
    print("okay")
