'''
10:30AM 07:00PM
4
05:30AM 10:00AM
11:00AM 08:15PM
01:45PM 05:00PM
08:00PM 11:00PM
'''

def time(time: str):
    tm = time[:-2]
    hours, minutes = tm.split(":")
    if time[:2] == "12" and time[-2:] == "AM":
        return int(minutes)
    if time[:2] == "12" and time[-2:] == "PM":
        return 720 + int(minutes)
    return int(hours) * 60 + int(minutes) + (720 if time[-2:] == "PM" else 0)

ST, EN = input().split()
STTIME = time(ST)
ENTIME = time(EN)
maxTime = ("", 0)
for _ in range(int(input())):
    inputString = input()
    start, end = inputString.split()
    stTime = time(start)
    enTime = time(end)
    largestStart = max(stTime, STTIME)
    smallestEnd = min(enTime, ENTIME)
    totalTime = smallestEnd - largestStart
    if (totalTime > maxTime[1]):
        maxTime = (inputString, totalTime)

if (maxTime[1] == 0):
    print("Call in a sick day.")
else:
    print(maxTime[0])