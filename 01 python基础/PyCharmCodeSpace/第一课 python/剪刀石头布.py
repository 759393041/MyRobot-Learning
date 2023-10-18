# 随机数库
import random

peo = input("请输入剪刀石头布：")
com = random.randint(0,2)
if  peo == '剪刀':
    peo_num = 0
elif peo == '石头':
    peo_num = 1
elif peo == '布':
    peo_num = 2
if peo_num  < com:
    if peo_num == 0 and com == 2:
        print(peo_num)
        print(com)
        print("peo WIN")
    else:
        print(peo_num)
        print(com)
        print("com WIN")
elif peo_num > com:
    if com == 0 and peo_num == 2:
        print(peo_num)
        print(com)
        print("com WIN")
    else:
        print(peo_num)
        print(com)
        print("peo WIN")
else:
    print(peo_num)
    print(com)
    print('equal')




