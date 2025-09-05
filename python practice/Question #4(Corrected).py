def main():
    a = input()
    b = input()

    s1 = set(a)
    s2 = set(b)

    a_b = s1.difference(s2)
    b_a = s2.difference(s1)

    if len(a_b) == 2:
        try:
            test_str1 = str(a)
            test_str1 = test_str1.replace(list(a_b)[0], str(list(b_a)[0]))
            test_str1 = test_str1.replace(list(a_b)[1], "")
            if test_str1 == b:
                print(list(a_b)[0], " ", str(list(b_a)[0]), "\n", str(list(a_b)[1]), sep = "")
                return
        except: pass
        test_str = str(a)
        test_str = test_str.replace(list(a_b)[1], str(list(b_a)[0])); test_str.replace(list(a_b)[0], "")
        if test_str == b: print(list(a_b)[1], " ", str(list(b_a)[0]), "\n", str(list(a_b)[0]), sep = "")
    else: print(list(a_b)[0], " ", str(list(b_a)[0]), "\n-", sep = "")
main()