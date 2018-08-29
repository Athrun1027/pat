line = input().strip()
if line[0] == '-':
    print(line[0], end="")
line = line[1:]

num, ex = line.split("E")
ex = int(ex)
if ex == 0:
    print(num, end="")
elif ex < 0:
    print("0.", end="")
    for x in range(abs(ex)-1):
        print("0", end="")
    num = num.replace(".", "")
    print(num, end="")
else:
    print(num[0], end="")
    num = num[2:]
    for x in range(max(len(num), ex)):
        if x < len(num):
            if x == ex:
                print(".", end="")
            print(num[x], end="")
        else:
            print("0", end="")
print()