

# 计算机硬件组成

[x86 x64 arm64的区别 - 赵青青 - 博客园 (cnblogs.com)](https://www.cnblogs.com/zhaoqingqing/p/13145115.html)



计算机冯诺依曼体系结构：由美籍匈牙利科学家**冯·诺依曼**提出

![image-20231007174650805](assets/image-20231007174650805.png)

![image-20231007174757469](assets/image-20231007174757469.png)

# 计算机软件组成

![image-20231007174836434](assets/image-20231007174836434.png)

系统软件就是建立人与计算机之间的交流平台，使人可以控制计算机进行工作。

![image-20231007175014272](assets/image-20231007175014272.png)

应用软件帮助我们完成特定功能：QQ

![image-20231007175352965](assets/image-20231007175352965.png)

[新建标签页 (github.com)](https://github.com/996icu/996.ICU)

# Python

特点：Python是一种**解释型、面向对象、动态数据类型**的高级程序设计语言

![image-20231007180126904](assets/image-20231007180126904.png)

## 编译型语言和解释型语言

​	python相比于其他语言像Java和C语言一个很大的特点就是它是解释型语言，而Java和C语言是编译型语言，因为计算机只能认识一种语言，就是二进制的机器码

​	编译型语言首先是将源代码编译生成机器是指令再由机器运行机器码。

![image-20231007180658398](assets/image-20231007180658398.png)

​	解释型语言的源代码不是直接翻译成机器指令，而是先翻译成中间代码，再由解释器对中间代码进行解释运行。

全翻译完，在读

![image-20231007180733012](assets/image-20231007180733012.png)

先翻译成中间代码，一行一行转换成机器码，需要一个解释器

叫一个翻译，读一行翻译一行

## 总结

![image-20231007181004970](assets/image-20231007181004970.png)

### 缺点

1.运行速度慢

同一段爬虫代码的运行时间对比图：

开发效率高但运行速度低

![image-20231007181040887](assets/image-20231007181040887.png)

![image-20231007181438408](assets/image-20231007181438408.png)

![image-20231007181450100](assets/image-20231007181450100.png)

## python应用场景

服务器的后台，网站的后台，但大公司的后台不是通过python写的，比如腾讯用的是C++,因为python效率低

![image-20231007181600531](assets/image-20231007181600531.png)

脚本

![image-20231007181743368](assets/image-20231007181743368.png)

![image-20231007181752882](assets/image-20231007181752882.png)

![image-20231007181804250](assets/image-20231007181804250.png)

![image-20231007181812813](assets/image-20231007181812813.png)

![image-20231007181822687](assets/image-20231007181822687.png)

## python安装

去 python.org安装

![image-20231007191809843](assets/image-20231007191809843.png)

## python解释器

![image-20231007191951024](assets/image-20231007191951024.png)

![image-20231007191956886](assets/image-20231007191956886.png)

![image-20231007192050293](assets/image-20231007192050293.png)

just in time：及时编译

![image-20231007192143585](assets/image-20231007192143585.png)

![image-20231007192204350](assets/image-20231007192204350.png)

## 集成开发环境pyCharm

![image-20231017164155989](assets/image-20231017164155989.png)

Vs就是一种IDE 就是开发工具

下载地址：

[Download PyCharm: Python IDE for Professional Developers by JetBrains](https://www.jetbrains.com/pycharm/download/?section=windows)

# 注释1.1.3.1

就是对代码解释说明

![image-20231017180457333](assets/image-20231017180457333.png)

## 单行注释 用#

#

## 多行注释用‘’‘

三个单引号‘’‘

![image-20231017180644195](assets/image-20231017180644195.png)

三个双引号”“”也行

ctrl+/快捷键

python对格式要求特别严格 有缩进错误

#### 注释里的Todo

注释里todo 没有做的事

![image-20231017201519652](assets/image-20231017201519652.png)

![image-20231017201509126](assets/image-20231017201509126.png)

# 变量1.1.3.2

变量是用来描述计算机中的数据存储空间的

![image-20231018133229664](assets/image-20231018133229664.png)

![image-20231018133807192](assets/image-20231018133807192.png)

![image-20231018133821353](assets/image-20231018133821353.png)

python可以同时定义多个变量

![image-20231018134031515](assets/image-20231018134031515.png)

## 命名规则

![image-20231018134236821](assets/image-20231018134236821.png)

## 命名规范

![image-20231018134857808](assets/image-20231018134857808.png)

大驼峰就是每个单词的首字母都大写，小驼峰就是除了第一个单词后面每个单词都的首字母都大写

## 常量

python 是没有常量的概念的，我们无法从语法上保证这个变量不能修改

所以看到变量名为大写 ： 说明他是类似常量， 我们不希望进行修改

![image-20231018140635915](assets/image-20231018140635915.png)

## 获取python中的关键字

![image-20231018140740385](assets/image-20231018140740385.png)

# 变量类型1.1.3.3

变量类型是指变量所保存的数据类型

分为数字型和非数字型

## 数值型变量

![image-20231018141232426](assets/image-20231018141232426.png)

```python
"""
数字型变量
"""
# 整型
NumberInt = 1
print(type(NumberInt))
# 浮点数 float
NumberFloat = 1.414
print(type(NumberFloat))
# Bool
NumberBool = False
print(type(NumberBool))
# 复数
NumberComplex = 1+1j
print(type(NumberComplex))
```



## 非数值型变量

![image-20231018141241971](assets/image-20231018141241971.png)



## type获取变量类型

![image-20231018141341784](assets/image-20231018141341784.png)

python是不需要指定变量类型的，所以是**动态类型语言**

甚至可以把age=1 编程age='RR'

## 运算符

![image-20231018142536419](assets/image-20231018142536419.png)

![image-20231018143110499](assets/image-20231018143110499.png)

![image-20231018143227358](assets/image-20231018143227358.png)

![image-20231018143927720](assets/image-20231018143927720.png)

