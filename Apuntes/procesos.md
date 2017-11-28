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
Vale para hacer un proceso hijo y ahi ejecutar otro programa.
##Exec
Sustituir un proceso en ejecucion
se hace un 2ºbash que cuando el nuevo proceso muere se lo notifica al padre y asi tienes el control otra vez.
Como cuando habres VIM, lo habres por la terminal(exec) se ejecuta, el bash de la terminal estaría parado, hata que paramos el programa VIM, que notificará al padre que ha acabado
y asi tendremos el control otra vez de la terminal.
EXEC FAMILY

  To P or not to P
  -------------------------------
  p > buscar en el path actual.

  Respecto de los argumentos
  -------------------------------
  v > varargs (Array de punteros).
  l > lista de parámetros (Pasamos cadenas de caracteres).

  En entorno (Enviroment)
  -------------------------------
  e > Se puede pasar una lista de variable de entorno

  execlp > Buscar el programa en el mismo directorio el padre. Si no la pones hay que especificar el PATH entero.
