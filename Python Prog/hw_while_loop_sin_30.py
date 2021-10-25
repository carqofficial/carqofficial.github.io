import math as mt
eps=0.0001
err=1
x=mt.pi/3

i=1
s=0
fact=1

while err>eps:
    fact=fact*i
    a=i%2
    if a==1:
        tr=pow(x,i)/fact
        tr=tr*pow(-1,(i-1)/2)
        s=s+tr
        err=mt.fabs(tr)
        i=i+1
    else:
        i=i+1

y=mt.sin(mt.pi/3)
print(s,y,i-2,err)

