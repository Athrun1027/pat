line = input().strip()
bit_call = ["Yi", "Qian", "Bai", "Shi", "Wan", "Qian", "Bai", "Shi"]
bit_out = ["no", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"]

if line[0] == '-':
    print("Fu", end=" ")
    line = line[1:]

if line == "0":
    print("ling", end="")

line = line.rjust(9, '0')
flag = 1;

for key, item in enumerate(line):
    if item == '0':
        if key == 4 and flag == 0:
            print(" Wan", end="")
        continue
    else:
        if flag == 0:
            print(" ", end="")
            if line[key - 1] == '0':
                print("ling", end=" ")
            if key == 8:
                print(bit_out[int(item)], end="")
            else:
                print(bit_out[int(item)], end=" ")
                print(bit_call[key], end="")
        else:
            if key == 8:
                print(bit_out[int(item)], end="")
            else:
                print(bit_out[int(item)], end=" ")
                print(bit_call[key], end="")
        flag = 0
print("")