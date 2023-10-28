# 高级变量类型 1.2.1.1 

python中的数据类型回顾：

![image-20231028102556642](assets/image-20231028102556642.png)

​	字符串、列表、元组、集合、字典统称为高级数据类型，他们有一个共同的特点，就是因为他们是容器

## 非数字类型变量特点

![image-20231028103251950](assets/image-20231028103251950.png)

# 列表1.2.1.2

![image-20231028103710152](assets/image-20231028103710152.png)

```python
MyList = ['XQC', 35, 'streamer']
print(MyList)
for count in MyList:
    print(count)

print(MyList[1])
```

## 增

![image-20231028110134692](assets/image-20231028110134692.png)

## 删

![image-20231028110208996](assets/image-20231028110208996.png)

## 查

![image-20231028120629558](assets/image-20231028120629558.png)

## 序(排序)

![image-20231028110240873](assets/image-20231028110240873.png)

对数字型排序

## 试题 用户登录系统1.2.1.3

![image-20231028120837126](assets/image-20231028120837126.png)

# 列表的嵌套1.2.1.4

![image-20231028140251602](assets/image-20231028140251602.png)

# 元组1.2.1.8

![image-20231028145634298](assets/image-20231028145634298.png)

如果元组的元素只有一个，是不会带小括号的

```python
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
##运行结果
#valorant
#<class 'str'>
```

原因就是他的类型变了

```python
如果元组内只有一个元素，print是不带括号的
"""
t = ('valorant')
print(t)
print(type(t))
#如果加上一个逗号
t = (19,)
print(t)
print(type(t))
######运行结果：
"""
valorant
<class 'str'>
(19,)
#他就又变成了tuple类型而不是int
<class 'tuple'>
"""
```