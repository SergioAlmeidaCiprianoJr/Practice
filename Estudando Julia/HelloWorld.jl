function printHelloWorld() 
    file = open("saida.txt", "w")
    write(file, "Hello World")
    close(file)
end

printHelloWorld()