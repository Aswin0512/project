import numpy as np
import matplotlib.pyplot as plt
k=int(input('Input the value of K:'))
g=int(input('Input the value of g:'))
M=[0]*(2*k+1) #an empty list to store the expectation values
M[0]=1 # normalisation condition
E= np.linspace(1.34,1.44,500)
x2=np.linspace(0.293,0.312,500)
En=[]
x2n=[]
for p in range(2,k+1):
    if p%2 ==0:
        B=np.zeros((int(p/2+1),int(p/2+1)))
    else:
        B=np.zeros((int((p-1)/2+1),int((p-1)/2+1)))
    for e in E:
        for j in x2:
            M[2]=j
            for l in range(4,2*k+1,2):
                M[l]=(4*e*(l-3)*M[l-4]-4*(l-2)*M[l-2]+(l-3)*(l-4)*(l-5)*M[l-6])/(4*g*(l-1))
                for m in range(len(B[0])):
                    for n in range(len(B[0])):
                        if p%2 ==0:
                            B[m][n]=M[2*(m+n)]
                        else:
                            B[m][n]=M[2*(m+n)+2]
            if np.linalg.det(B) >= 0:
                En.append(e)
                x2n.append(j)    
    if p != k:
        E=list(set(En))
        x2=list(set(x2n))
        En=[]
        x2n=[]
    else:
        E=En
        x2=x2n          
print(len(E))
print(len(x2))
plt.plot(E,x2)
plt.show()