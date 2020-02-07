include("ConjugateGradients.jl")

file = open("input.txt")

x = readuntil(file, '#')
x = parse.(Float64, split(x))

iMAX = readuntil(file, '#')
iMAX = parse(Int, iMAX)

error = readuntil(file, '#')
error = parse(Float64, error)

sizeA = readuntil(file, '#')
sizeA = parse(Int, sizeA) 

A = readuntil(file, '#')
A = parse.(Float64, split(A))
A = reshape(A, (sizeA, sizeA))

b = readuntil(file, '#')
b = parse.(Float64, split(b))

close(file)

x = conjugate_gradients(A, b, x, error, sizeA)

println("$(x)")