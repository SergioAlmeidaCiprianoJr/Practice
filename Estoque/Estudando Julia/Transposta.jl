array = fill(0, 4, 4)
for i = 1:4, j = 1:4
    array[i, j] += j
    print(array[i, j])
    if j == 4
        print("\n")
    end
end

print("\n")
print("\n")

array = transpose(array)
for i = 1:4, j = 1:4
    print(array[i, j])
    if j == 4
        print("\n")
    end
end