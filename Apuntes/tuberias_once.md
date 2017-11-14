#Crear una tuberia.

#/bin/bash

hecho el hola en ese inodo
echo "Hola" > tuberia.txt
Linca la tuberia 4 al inodo de tuberia.txt
exec 4< tuberia.txt
Quita el nombre al tuberia.txt. Quedando solo el inodo
unlink tuberia.txt
Esperas 7 segundos
sleep 7
Lees 3 byts, los metes en i, de el tubo 4
read -n 3 i 4>
Cierras el tubo 4
exec 4<&-
echo $i



