alfabeto = [A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z]

a=input("Ingrese el numero de rotacion:\n >")
rot=[]
for i in range(0,len(alfabeto)):
    if((i+a)>=26):
        rot.add(alfabeto[i])