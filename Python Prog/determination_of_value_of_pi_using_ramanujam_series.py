
z=9801
s=pow(8,0.5)
r=26390
x=1103
a=396
m=1
k=1
n=4
f=1103

for i in range(1,n+1):
    m=m*i
    l=pow(m,4)
    k=k*(4*i)*((4*i)-1)*((4*i)-2)*((4*i)-3)
    q=k/l
    t=r*i
    b=t+x
    c=pow(a,(4*i))
    d=q*b/c
    f=1103+d
    e=s*f
    pi=z/e
#    print(pi)

print(pi)



