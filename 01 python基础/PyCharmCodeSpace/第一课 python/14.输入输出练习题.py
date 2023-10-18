# """
# 1.计算器需求:
# 用户输入a
# 用户输入b
# 计算输出a+b=?
# """
# # 用户输入a
# a = input("请输入a：")
# a = int(a)
# # 用户输入b
# b = input("请输入b：")
# b = int(b)
# print(a+b)
"""
收银员输入苹果的价格,单位:元/斤
# 收银员输入用户购买苹果的重量,单位:斤
# 计算并输出付款金额
"""
# # 收银员输入苹果的价格,单位:元/斤
# Apple_SigPrice = input('请输入苹果价格：')
# # 收银员输入用户购买苹果的重量,单位:斤
# Apple_TotalWeight = input('请输入购买苹果的总重量:')
# Apple_SigPrice = float(Apple_SigPrice)
# Apple_TotalWeight = float(Apple_TotalWeight)
# # 计算并输出付款金额
# Payment = Apple_SigPrice * Apple_TotalWeight
# print(Payment)

"""
3.个人名片需求:
在控制台依次提示用户输入: 姓名、公司、职位、电话、邮箱
按照以下格式输出:
公司名称
姓名
职位
电话:电话
邮箱: 邮箱
"""
print('*'*50)
name = input("name,pls:")
company = input(" company name pls:")
job = input("job pls:")
tel = input("tel num pls:")
email = input("email num pls:")

print(company)
print(name)
print(job)
print(tel)
print(email)
print('*'*50)