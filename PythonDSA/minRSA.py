import random 

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True
 

def generate_prime(length):
    while True:
        prime_candidate = random.randint(2**(length-1), 2**length - 1)
        if is_prime(prime_candidate):
            return prime_candidate
 
 
if __name__=='__main__':

    d = generate_prime(128)
    print(d)
    
    
    
