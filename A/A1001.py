a, b = input().strip().split(" ")
c = int(a) + int(b)
if c < 0:
    print('-', end="")
ans = ""
i = 1
for x in str(abs(c))[::-1]:
    ans += x + ',' if i % 3 == 0 else x
    i += 1
ans = ans[:-1] if ans[-1] == ',' else ans
print(ans[::-1])