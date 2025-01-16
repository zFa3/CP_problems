'''
5
1 30
2 45
4 90
0 10
14 2
9 44
'''

songs = []
for _ in range(int(input())):
    minutes, seconds = map(int, input().split())
    songs.append(minutes * 60 + seconds)

songs = sorted(songs)

time = tuple(map(int, input().split()))
total_time = time[0] * 60 + time[1]
counter = 0
for i in songs:
    if total_time - i > -1:
        counter += 1
        total_time -= i
    else:
        break
print(counter)