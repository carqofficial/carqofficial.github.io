
# ln(1-x)=-x=s1
# ln(1-x)=-x-x^2/2+s2
# |s1-s2|=x^2/2

# eps = absolute accuracy
import math as mt

eps = 0.001
xn = 5.0
x = 1.0-1.0/xn


err = 1.0
# choose err such that err>eps
i = 1
s = 0.0
while err > eps:
    tr = -pow(x, i)/i
    s = s+tr
    err = mt.fabs(tr)
    i = i+1

y = mt.log(5)
z = mt.log10(100)
print(-s, i-1, err)
print(y)
print(z)
