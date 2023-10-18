"""
计算 0 ~ 100 之间所有数字的累计求和结果0+1 +2+3+4+..+100
"""
sum = 0
index = 0
while index < 101:
    sum += index
    index += 1
print(sum)