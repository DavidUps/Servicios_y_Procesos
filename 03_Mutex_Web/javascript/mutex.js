var pila = []
var mutex = []

function obrero(name) {
    this.name = name
}
//Ejecuta la función
obrero("David")
//Crea un objeto, ejecuta la función y cambia el this
new obrero("David")
function cargar() {
    log.innerHTML+= "buscando chica <br/>\n"
}

function descargar() {
    log.innerHTML += "buscando papel <br/>\n"
}

function main() {
    log = document.getElementById("log")

    mutex.push(cargar)
    mutex.push(cargar)
    mutex.push(descargar)
    mutex.push(cargar)
    mutex.push(descargar)

    for(var i=0; i<mutex.length; i++){
        mutex[i]()
    }
}
