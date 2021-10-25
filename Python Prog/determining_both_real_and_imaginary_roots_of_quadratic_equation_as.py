
a=1.0
b=2.0
c=3.0
d=b*b-4.0*a*c

if d >=0:
    w=pow(d,.5)
    v=2.0*a
    print("roots are real")
    x1=-b+w
    x1=x1/v
    x2=-b-w
    x2=x2/v
    print("x1=",x1,"x2=",x2)
else:
    v=2.0*a
    w=pow(-d,.5)
    xr=-b/v
    xi=w/v
    print("real part of x1=",xr,"imag part of x1",xi,"real part of x2=",xr,"imag part of x2",-xi)
