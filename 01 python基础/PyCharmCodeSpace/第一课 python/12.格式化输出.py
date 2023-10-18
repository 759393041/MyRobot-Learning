"""
1.定义字符串变量 name，输出 我的名字叫 小明，请多多关照!
2.定义整数变量 student no，输出 我的学号是 00001
3.定义小数 price、weight、money，输出 苹果单价9.00 元/斤，购买了 5.00 斤，需要支付 45.00 元
4.定义一个小数 scale，输出 数据比例是 10.00%
"""
name = '我的名字叫小明，请多多关照'
print(name)
student_no = 1
print('我的学号是:%05d' % student_no)
price = 9.00
weight = 5.00
money = 45.00
print('苹果单价%.02f元/斤，购买了%.02f斤，需要支付%.02f元' % (price, weight, money))
scale = 10.00
print('%.02f%%' % scale)
