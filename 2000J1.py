a, b = map(int, input().split())
print("Sun Mon Tue Wed Thr Fri Sat")
print(' '*(4*(a-1)), end='')
for i in range(b):
    end_arg = ' '
    if ((i+a)%7) == 0 or (i+1) == b:
        end_arg = ''
    if i+1>9: # if the integer we are printing has more than one digit
        print(f' {i+1}{end_arg}', end = "")
    else:
        print(f'  {i+1}{end_arg}', end = "")
    if not (a+i)%7:
        print()
if (b+a-1)%7!=0:
    print()