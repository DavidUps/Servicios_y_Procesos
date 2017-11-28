function log(div)
{
  this.mssgs = []                         ==> Todo
  this.output = document.getElementById(div) ==> Inicializar el Objeto
}

log.prototype.dump = function()
{
  this.output.innerHTML = this.mssgs.toString()
}

log.prototype.log = function(mssg)
{
  this.mssgs.push(new Date() + ":" + mssg +"<br/>\n")
  this.dump()
}

function main()
{
  var logger = new log("log")         ==> Crear el objeto
  logger.output     ==> Cambiar los atributos
  logger["output"]  ==>

  logger.a  ==> Primero mira si extiste, despues mira si esta en el prototipo de la funcion.

  logger.dump("Hola aplicacion iniciada.")
  logger.dump("Esperando comandos")

  ##1Guardar los atrbutos
  Coger los atributos
  : w javascript/log.js
  index.html = metiendo otro script


}



