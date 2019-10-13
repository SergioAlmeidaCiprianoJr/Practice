array = fill(1, 10, 10)
for i = 1:10, j = 1:10
    print(array[i, j])
    if j == 10
        print("\n")
    end
end