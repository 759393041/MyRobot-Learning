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
# 收银员输入苹果的价格,单位:元/斤
Apple_SigPrice = input('请输入苹果价格：')
# 收银员输入用户购买苹果的重量,单位:斤
Apple_TotalWeight = input('请输入购买苹果的总重量:')
Apple_SigPrice = float(Apple_SigPrice)
Apple_TotalWeight = float(Apple_TotalWeight)
# 计算并输出付款金额
Payment = Apple_SigPrice * Apple_TotalWeight
print(Payment)