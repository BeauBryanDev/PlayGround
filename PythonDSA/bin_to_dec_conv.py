def bin2dec(binary):
 
    binary1 = binary
    decimal, i, n = 0, 0, 0
    
    while(binary != 0):
        dec = binary % 10
        decimal = decimal + dec * pow(2, i)
        binary = binary//10
        i += 1
    return decimal
    
 
def dec2bin( num ) : 

    res = bin(num).replace("0b","") 

    if ( len(res) % 4 != 0 ) :

        div = len(res) / 4
        div = int(div) 

        cntr = ( 4*(div + 1 ) ) - len(res) 

        for i in range ( 0, cntr ) : 

            res = '0' + res 

        return res 


