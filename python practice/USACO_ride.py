"""
ID: wang1ja1
LANG: PYTHON3
PROB: ride
"""
fin = open('ride.in', 'r')
fout = open('ride.out', 'w')
def main():
    a, b = fin.readline(), fin.readline()
    c, d = 1, 1
    for i, e in enumerate(a):
        c *= (ord(e)-64)
    for i, e in enumerate(b):
        d *= (ord(e)-64)
    if c % 47 == d % 47:
        return "GO\n"
    return "STAY\n"
fout.write(main())
fout.close()