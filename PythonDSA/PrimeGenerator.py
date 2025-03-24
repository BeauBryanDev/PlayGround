import random 

from is_Prime import is_prime 

#Function to generate a prime number of specified length. 

def generate_prime(length) :


    while True : 

        prime_candidate = random.randint(2**(length-1) , 2**length-1 )


