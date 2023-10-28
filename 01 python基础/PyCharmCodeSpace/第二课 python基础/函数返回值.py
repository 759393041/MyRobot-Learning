def cul2(a, b):
    return a + b, a - b, a * b


a, b = 1, 2
rr = cul2(a,b)
a, b=rr[0],rr[1]
pass