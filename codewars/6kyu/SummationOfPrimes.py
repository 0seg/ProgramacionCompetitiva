def summation_of_primes(primes):
    suma  = 0
    for i in range(2, primes+1):
        prime = True
        for j in range(2, i):
            if i % j == 0:
                prime = False
                break
        if(prime):        
            suma += i
    return suma 
primes = int(input())
print(summation_of_primes(primes))

