
#e^(-x) = 1-x/1!+x^2/2!-x^3/3!+x^4/4!......upto n terms

s=1.0
fact=1.0
x=0.1
n=5

for i in range(1,n+1):
    fact=fact*i
    tr=pow(x,i)/fact
    tr=tr*pow(-1,i)
    s=s+tr

print(s)