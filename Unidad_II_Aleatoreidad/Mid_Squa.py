def generar(semilla, longitud):
   semilla_num=int(semilla);
   semilla_num=semilla_num*semilla_num;
   print("El cuadrado de la semilla es: " + str(semilla_num))
   semilla_aux=str(semilla_num)
   inicio=(len(semilla_aux)//2) - (longitud//2)
   final=inicio+longitud
   semilla=semilla_aux[inicio:final]
   print("La Semilla Resultante es: " + semilla)
   return semilla

cantidad=int(input("Ingrese la cantidad de numeros aleatorios que requiere\n>"))
longitud=int(input("Ingrese la longitud de la semilla\n>"))
semilla=""
for i in range(0,longitud):
   temp=input("Ingrese un valor del 1-10\n>")
   semilla=semilla+temp

print("La semilla inicial es: "+semilla)

i=0
numeros_aleatorios=""
while(i<cantidad):
   semilla=generar(semilla, longitud)
   numeros_aleatorios=numeros_aleatorios+semilla
   i=i+longitud

numeros_aleatorios=numeros_aleatorios[0:cantidad]
print("Los "+str(cantidad)+" Numeros Aleatorios son:\n"+numeros_aleatorios)


