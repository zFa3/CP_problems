def sumToN(integer):
    return (integer * (integer + 1))

flowers = int(input())
capacity = int(input())
trips = (flowers // capacity)
costOfTrips = int((sumToN(trips)) * capacity + (flowers % capacity) * 2 * trips)
costOfExtra = flowers * 2 if trips * capacity != flowers else 0
costOfExtra = (flowers % capacity) * 2
print(costOfTrips + costOfExtra)