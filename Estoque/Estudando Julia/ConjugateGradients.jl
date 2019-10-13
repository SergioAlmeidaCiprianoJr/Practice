function conjugate_gradients(A, b, x, error, sizeA)

    iMAX = 1000000
    i = 0

    d = r = b - A * x
    auxNEW = sum(r.*r)

    while i<iMAX && auxNEW!=0
        
        Ad = A*d
        alpha = auxNEW/sum(d.*(Ad))
        x = x + alpha.*d
        
        if i%((sizeA)^1/2) == 0
            r = b - A * x
        else
            r = r - alpha.*Ad
        end
        
        auxOLD = auxNEW
        auxNEW = sum(r.*r)
        
        if (abs(auxNEW)^1/2 <= error)
            break
        end
        
        ß = auxNEW/auxOLD
        d = r + ß*d
        i+=1
    end

    x

end