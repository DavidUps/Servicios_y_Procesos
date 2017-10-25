class Azafata
    #Variable de clase
    @@count = 0 

    def initialize(name)
        #Instancia
        @name = name
        @count += 1
    end

    def greet(name)
        puts "helloooooooooooooooooooooooe, MR. #{name} . I'm #{@name}, your boyfriend"
    end
    def slef.count
        @@count
    end
end
