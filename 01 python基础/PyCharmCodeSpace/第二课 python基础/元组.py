"""
元组是用()
"""
t = ('apex', "csgo")
print(t)
"""
如果元组内只有一个元素，print是不带括号的
"""
t = ('valorant')
print(t)
print(type(t))
t = (19,)
print(t)
print(type(t))

a=10
b=20
tmp= a,b
b,a=tmp
print(a,b)

t = "张三", 26
print("姓名：%s, 年龄:%d"%t)
# l =[1,2,3]
# l=tuple(l)
# l[1]=4
# print(l)
