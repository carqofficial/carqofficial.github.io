#
u=1
n=100
x=2
s=1

for i in range(1,n+1):
    u=u*i
    v=pow(x,i)/u
    s=s+v
#    print(s)

print(s)
