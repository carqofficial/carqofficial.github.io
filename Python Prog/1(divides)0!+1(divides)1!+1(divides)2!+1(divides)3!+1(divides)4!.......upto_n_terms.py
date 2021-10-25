s=1
fact=1.0

n=5

for i in range(1,n+1):
    fact=fact*i
    s=s+1.0/fact

print(s)