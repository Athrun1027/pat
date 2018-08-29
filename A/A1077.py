n = int(input().strip())
words = ""
for x in range(n):
    line = input().strip()[::-1]
    if x == 0:
        words = line
    else:
        min_l = min(len(words), len(line))
        for xx in range(len(words)):
            if words[xx] != line[xx]:
                words = words[0:xx]
                break
if words == "":
    print("nai")
else:
    print(words[::-1])