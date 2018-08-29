lines = []
for x in range(4):
    lines.append(input().strip())

days = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"];

minl = min(len(lines[0]), len(lines[1]))
find = 1
for i in range(minl):
    if lines[0][i] == lines[1][i]:
        asc = ord(lines[0][i])
        if find == 1 and asc >= ord("A") and asc <= ord("G"):
            print(days[asc - ord("A")], end=" ")
            find = 2
        elif find == 2 and asc >= ord("A") and asc <= ord("N"):
            ans = asc - ord("A") + 10
            print(str(ans).rjust(2, '0'), end=":")
            break
        elif find == 2 and lines[0][i].isdigit():
            print(lines[0][i].rjust(2, '0'), end=":")
            break
minl = min(len(lines[2]), len(lines[3]))
for i in range(minl):
    if lines[2][i] == lines[3][i] and lines[2][i].isalpha():
        print(str(i).rjust(2, '0'), end="")
        break
print()