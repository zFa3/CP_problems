for _ in range(int(input())):
    shelves, bottles = map(int, input().split())
    brands = {}
    for i in range(bottles):
        brand, value = map(int, input().split())
        if brand in brands:
            brands[brand] += value
        else:
            brands[brand] = value
    b = [brands[item] for item in brands.keys()]
    b = sorted(b, reverse = True)
    print(sum(b[:min(len(b), shelves)]))