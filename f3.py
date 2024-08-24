dct = {}
for _ in range(int(input())):
    name = input()
    try: 
       print(name + str(dct[name]))
       dct[name] += 1
    except Exception as e:
       print("OK")
       dct[name] = 1