import numpy as np
import matplotlib as mp
k=input('Input the value of K:')
M=[0]*(2*k+1) #an empty list to store the expectation values
M[0]=1 # normalisation condition
E= np.linspace(0,10,11)
x2=np.linspace(0,5,6)
En=[]
x2n=[]
for p in range(2,k+1):
    if p%2 ==0:
        B=np.zeros((p/2)+1)
    else:
        B=np.zeros((p-1)/2+1)

    for e in E:
        for j in x2:
            M[2]=j
            for l in range(4,2*k+1,2):
                M[l]=(4*e*(l-3)*M[l-4]-4*(l-2)*M[l-2]+(l-3)*(l-4)*(l-5)*M[l-6])/(4*g*(l-1))
                for m in range(length(B[0])+1):
                    for n in range(length(B[0])+1):
                        if p%2 ==0:
                            B[m][n]=M[2(m+n)]
                        else:
                            B[m][n]=M[2(m+n)+2]
                    

