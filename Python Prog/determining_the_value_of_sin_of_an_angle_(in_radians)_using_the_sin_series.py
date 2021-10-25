import math as mt
x=mt.pi/3

s=x
n=10
#n=number of term of series
fact=2
#s=x-x^3/3!+x^5/5!

for i in range(3,2*n):
    fact=fact*i
    c=i%2
    if c==1:
        tr=pow(x,i)/fact
        tr=tr*pow(-1,(i-1)/2)
        s=s+tr
print(s)




