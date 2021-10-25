
#1/0!-1/1!+1/2!-1/3!+1/4!......upto n terms

s=1.0
fact=1.0

n=5

for i in range(1,n+1):
    fact=fact*i
    tr=1.0/fact
    tr=tr*pow(-1,i)
    s=s+tr

print(s)
