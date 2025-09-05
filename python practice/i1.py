for _ in range(int(input())):
	m, n = map(int, input().split())
	str1 = input()
	str2 = input()
	a = [[0 for i in range(26)]]
	for i, t in enumerate(str1):
	    temp = [0 for i in range(26)]
	    try:
	        temp = a[-1][:]
	    except: pass
	    temp[ord(t) - ord('a')] += 1
	    a.append(temp[:])
	b = [[0 for i in range(26)]]
	for i, t in enumerate(str2):
	    temp = [0 for i in range(26)]
	    try:
	        temp = b[-1][:]
	    except: pass
	    temp[ord(t) - ord('a')] += 1
	    b.append(temp[:])
	for _ in range(n):
		l, r = map(int, input().split())
		l -= 1
		a_letters = list(map(lambda x:x[1] - x[0], zip(a[l], a[r])))
		# print(a_letters)
		b_letters = list(map(lambda x:x[1] - x[0], zip(b[l], b[r])))
		# print(a_letters, "\n", b_letters)
		print(sum(map(lambda x:abs(x[0] - x[1]), zip(a_letters, b_letters)))//2)