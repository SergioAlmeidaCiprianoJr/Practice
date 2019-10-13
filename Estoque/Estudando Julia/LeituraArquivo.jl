file = open("input.txt")
entrada = readline(file)

println(entrada)
println(typeof(entrada)) #String

entrada = parse(Int, entrada)
println(entrada)
println(typeof(entrada)) #Int64