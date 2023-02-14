import numpy as np
k=int(input('Input the value of K:'))
up=float(input('input upper limit of E:'))
lw=float(input('input the lower limit of E:'))
upx=float(input('input the upper limit of 1/(x^2+a^2):'))
lwx=float(input('input the lower limit of 1/(x^2+a^2):'))
nx=int(input('number of points in 1/(x^2+a^2):'))
ne=int(input('number of points in E:'))
a=1
M=[0]*(2*k+1) #an empty list to store the expectation values
M[0]=1 # normalisation condition
u= list(np.arange(lw,up,(up-lw)/ne))
x=list(np.arange(lwx,upx,(upx-lwx)/nx))
E=[]
xa=[]
for j in u:
    for f in x:
        E.append(j)
        xa.append(f)
En=[]
xan=[]
for p in range(1,k+1):
    B=np.zeros(p+1,p+1)
    for e in range(len(E)):
        M[1]=xa[e]
        for l in range(2,2*k+1):
            if l == 2:
                M[l]=

            
            for m in range(len(B[0])):
                for n in range(len(B[0])):
                    if p%2 ==0:
                        B[m][n]=M[2*(m+n)]
                    else:
                        B[m][n]=M[2*(m+n)+2]
        if np.linalg.det(B) > 0:
            En.append(E[e])
            xan.append(M[2])
    if p>k-3:
        filename='E,<x^2>'+str(p)+str(up)+'-'+str(lw)+'.txt'
        file=open(filename,'w')
        for i in range(len(En)):
            file.write(str(En[i])+' '+str(x2n[i])+'\n')
        file.close()    
    print(len(En))
    print(len(xan))
    E=En
    xa=xan
    En=[]
    xan=[]
