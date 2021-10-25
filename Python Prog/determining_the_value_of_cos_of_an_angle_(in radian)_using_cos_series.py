#cos(x)=1-(x^2)/2!+(x^4)/4!-(x^6)/6!+.......

import math as mt
x=mt.pi/3
s=1
k=1
n=10
#n=120

for i in range(1,n+1):
    s=s*i
    c=i%2
    if c==0:
        m=pow(x,i)/s
        z=m*pow((-1),(i/2))
        k=k+z

print(k)








