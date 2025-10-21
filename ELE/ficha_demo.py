import numpy as np 

#tensao
v1=2
#corrente
i1=1/1000
#resistencias e unidades
k=1000
r1=10*k
r2=5*k
r3=5*k
r4=5*k
r5=5*k
#definir malhas
m1 = i1 + r1*ia+ r2*(ia-ib) = 0
m2 = r2*(ib-ia) + r3*ib + v1 +r4*(ib-ic)= 0 
m3 = r4*(ic-ib) - v1 + r5*ic = 0 