n = int(input().strip())
lines = []
for x in range(n):
    name, password = input().strip().split(" ")
    if '1' in password or '0' in password or 'l' in password or 'O' in password:
        password = password.replace('1', '@')
        password = password.replace('0', '%')
        password = password.replace('l', 'L')
        password = password.replace('O', 'o')
        lines.append((name, password))
if len(lines) != 0:
    print(len(lines))
    for item in lines:
        print(item[0]+" "+item[1])
elif n == 1:
    print("There is 1 account and no account is modified")
else:
    print("There are {} accounts and no account is modified".format(n))