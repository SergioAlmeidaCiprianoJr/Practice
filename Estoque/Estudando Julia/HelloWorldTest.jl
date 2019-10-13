using Test

include("HelloWorld.jl")

function printTestHelloWorld() 
    file = open("test.txt", "w")
    write(file, "Hello World")
    close(file)
end

printTestHelloWorld()
printHelloWorld()
fileTest = open("test.txt")
fileSaida = open("saida.txt")

@test readline(fileTest) == readline(fileSaida)

close(fileTest)
close(fileSaida)