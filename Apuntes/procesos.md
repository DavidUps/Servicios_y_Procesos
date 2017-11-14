#PROCHECHOS
Se duplican en partes iguales.
Crear subprocesos en la terminal
mandar a segundo plan con ampersan
pararlos con control z
primer plano  fg
segundo plano con bg
Tuberias las heredan los hijos de los padres
Hay procesos padres y proceso hijos
un proceso que se ejecuta en segundo plano es un jobs
##Para ver los procesos ponemos en la terminal ps
Opciones del ps:
  -e listar todos procesos de tu familia (mismo stdin, stdout, stder).
  -o
  pid       > identificador de proceso
  ppid      > identificador de priceso padre
  command   > comando que ejeuta
  | grep vi
###Ejemplo
ps -e -o pid,ppid,command | grep vi
##Matar un proceso
kill pid > utilidad que permite enviar mensajes a cada proceso.
kill -9 pid > envias ese mensaje que es muerte total y absoluta
##Fork
Mitosis de un proceso
##Exec
Sustituir un proceso en ejecucion

