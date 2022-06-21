import numpy as np
import pandas as pd
import csv

lista = list()                      #creo la lista para poner los valores de la rampa
lista.insert(0,0)                   #pongo 0 en el primer numero de la lista

for i in range(1,64):   
    num = lista[i-1] + int(52)       
    lista.append(num)               #la cargo con 64 numeros entre 0 y 3300

print (lista)

with open('sgn.h','w') as f:            #abro el archivo sgn
    writer = csv.writer(f)              
    writer.writerow(lista)              #escribo los datos de la lista a mi archivo sgn