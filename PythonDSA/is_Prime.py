import random 
from math import sqrt

print("\n")

#Function to check is a number is prime or Not. 

def is_prime(number) : 

    if ( number <= 1 ) : 
            
        return False

    for i in range( 2, int(sqrt(number) ) + 1 ) : 

        if ( number % i == 0 ) :    

            return False 

        else : 

            pass

    return True 

def generate_prime(length) : 

    while True : 
        
        pssb = random.randint( length -1 , 2**(length-1) ) 

        if is_prime(pssb) :

            return pssb 


if __name__=="__main__":

    number = int(input("Please Enter an integer Number a  n : "))
    length = int(input("Please Enter the length of possible prime number : "))


    d = (is_prime(number))

    print("\n")
    if ( d == True ) : 

        print(f'{number} is a Primer Number as {d}')

    else : 

        print(f'{number} is Not a Primer Number as {d}')


    print("\n")

    print(generate_prime(length))

    print("end\n")


