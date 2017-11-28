
function opera(fn){
    fn()
}


Array.prototype.each = function(fn){

    for (var i=0; i<this.length; i++)
        fn(this[i])
}

Array.prototype.inject = function(acumulador, fn){

    for (var i=0; i<this.length; i++)
        acumulador = fn(acumulador, this[i])
    return acumulador
}


function main(){
/*
    for(var i=0; i<3; i++)
        opera(function (){
            alert(i)
        })
*/
    var a = [1,2,3,4,5,6]
    //var b = [5,4,3,2,3,1]
    var p = []

    a.each(function(el){
        if (el> 2 && el % 2 == 1)
        p.push(el)
    })


    alert (p.toSource())

    alert(a.inject(0, function(acumulador, el){
        return acumulador+el
    }))

/*
    a.each(function(el){
        alert(el)
    })

    b.each(function(al){
        alert(al)
    })
*/
}


