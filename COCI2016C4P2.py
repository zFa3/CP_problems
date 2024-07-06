n = int(input())
cities = []
for i in range(n):
    cities.append(input())

destination = input()
cities = [city[len(destination):len(destination) + 1] for city in cities if city[:len(destination)] == destination]
#print(cities)

def printer(cities):
    counter = 3
    print('*'*3, end = '')
    for i in range(65, 91):
        counter += 1
        if chr(i) in cities:
            print(chr(i), end = '')
        else:
            print('*', end = '')
        if counter % 8 == 0:
            print()
    print('*'*3, end = '')

printer(cities)