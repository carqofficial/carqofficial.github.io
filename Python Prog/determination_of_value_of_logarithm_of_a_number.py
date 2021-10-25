
n=10
#n=100000
x=-0.4
m=0

for i in range(1,n+1):
    s=pow(x,i)
    y=s/i
    z=y*pow((-1),(i+1))
    m=m+z
if x>-1:
    print("ln(1+x)=",m)
if x<=-1:
    print("undefined")


