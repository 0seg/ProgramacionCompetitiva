def modified_sum(a, n):
    suma = 0
    for i in a:
        i = int(i)
        suma += i**n
        
    return suma - sum(a)