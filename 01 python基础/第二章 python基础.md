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
t = apex, csgo#这种写法也是元组
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

所以若想用元组但目前只有一个数据时

请务必待在括号内的数据后加上"，"逗号

## 元组的特点

不能修改：不能添加/删除/修改元素，append del 都用不了，元组变量定义出来就固定了const，不能重新声明

## 元组的应用场景

### 自动组包与自动解包

![image-20231028155054673](assets/image-20231028155054673.png)

![image-20231028162044681](assets/image-20231028162044681.png)

注意：自动解包必须有数量相同的变量去接收，如果变量数量不等于元组内成员个数，会报错。

### 交换变量

```python
a=10
b=20
a,b=b,a#这就相当于是元组的组包的操作
print(a,b)
```

### 格式化输出

![image-20231028162828319](assets/image-20231028162828319.png)

### 保护数据安全(类似于const)

![image-20231028163103749](assets/image-20231028163103749.png)

```python
# l =[1,2,3]
# l=tuple(l)
# l[1]=4
# print(l)
```

# 函数的参数1.2.2.2

```python
def helloworld():
    print("helloworld")

helloworld()
```

![image-20231028165235271](assets/image-20231028165235271.png)

```python
def myprint(aa):
    print(aa)


aa = input()
myprint(aa)
```

## 形参和实参问题

```python
def myprint(aa):
    print(aa)
    aa ="i have changed"#内部修改外部指针


mystr = input()
myprint(mystr)
print(mystr)
```

![image-20231028172444754](assets/image-20231028172444754.png)

显然失败了

## 函数的返回值

![image-20231028173459845](assets/image-20231028173459845.png)

四种：无参无返回值，有参无返回值，有参有返回值，无参有返回值

return

根据元组的方法，可以一次返回多个返回值，返回值可以用元组接收，他不是元组的解包操作。

```python
def cul2(a, b):
    return a + b, a - b, a * b


a, b = 1, 2
rr = cul2(a,b)
a, b=rr[0],rr[1]
pass
```

![image-20231028175118653](assets/image-20231028175118653.png)

## 形参和实参1.2.2.4

![image-20231028180352690](assets/image-20231028180352690.png)

![image-20231028180604188](assets/image-20231028180604188.png)

### 形参的作用域

![image-20231028180626853](assets/image-20231028180626853.png)

# 局部变量和全局变量

![image-20231028180804648](assets/image-20231028180804648.png)

![image-20231028181001792](assets/image-20231028181001792.png)

![image-20231028185311385](assets/image-20231028185311385.png)

## 函数内部修改全局变量

![image-20231028183425627](assets/image-20231028183425627.png)

Python在函数内部是不被允许改变全局变量的

你以为你在调用全局变量，但实际上是局部变量的声明

所以他会认为你print应该写在变量后面。

![image-20231028184811187](assets/image-20231028184811187.png)

![image-20231028184847847](assets/image-20231028184847847.png)

![image-20231028184837969](assets/image-20231028184837969.png)

# 模块1.2.2.6

![image-20231028185122164](assets/image-20231028185122164.png)

![image-20231028185323756](assets/image-20231028185323756.png)

![image-20231028185726398](assets/image-20231028185726398.png)

