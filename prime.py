from fractions import Fraction

def findNatToPrime(n):
    primes = []
    nprimes = 0
    i = 2
    while nprimes < n:

        isPrime = True

        for p in primes:
            isPrime = isPrime and i % p != 0

        if isPrime:
            primes.append(i)
            nprimes += 1

        if primes[nprimes - 1] == n:
            return nprimes

        i += 1

    return 0


    

def primeToNat(n):
    temp = n
    #temp = nthPrime(n)
    temp = temp**2
    return temp


def natToInt(n):
    if n < 0:
        n = -2*n
    elif n >= 0:
        n = 2*n + 1
    return n

def oddToNat(n):
    if n <= 0:
        n = (-2)*n + 1
    elif n > 0:
        n = 2*n
    return n

def ratToNat(n):
    lev = 1
    rem = n
    while rem > 0 and rem > lev:
        rem = rem - lev
        lev = lev + 1
    denom = rem
    numer = lev - (rem - 1)
    return Fraction(numer, denom)

def natToRat(numer, denom):
    rem = denom
    lev = numer + (rem - 1)
    while lev > 0:
        lev = lev - 1
        rem += lev
    return rem

def NtoNxN(n):
    lev = 1
    rem = n
    while rem > 0 and rem > lev:
        rem = rem - lev
        lev = lev + 1
    denom = rem
    numer = lev - (rem - 1)
    return (numer, denom)

def NxNtoN(numer, denom):
    rem = denom
    lev = numer + (rem - 1)
    while lev > 0:
        lev = lev - 1
        rem += lev
    return rem
    



def NtoNN(x, n):
    list = []
    while  n > 0:
        j = (2 ** (x-1)) * (2 * n - 1)
        list.append(j)
        n = n - 1
    return list

print(NtoNN(2, 3))
print(NtoNN(3, 2))
print(NtoNN(3, 3))
print(NtoNN(1, 3))
print(NtoNN(1, 4))
print(NtoNN(2, 1))
print(NtoNN(2, 3))











