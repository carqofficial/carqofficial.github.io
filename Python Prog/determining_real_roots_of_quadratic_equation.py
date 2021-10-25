#to determine nature of roots of quadratic equation
#pow means power
a=1
b=8
c=3

d=b*b-4*a*c
if d>=0:
    x1=-b+pow(d,.5)
    x1=x1/(2*a)
    x2=-b-pow(d,.5)
    x2=x2/(2*a)
    print("roots are real",x1,x2)
else:
    print("roots are imaginary")