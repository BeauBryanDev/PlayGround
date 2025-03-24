#Selection Sort Algorithm...

def selectionSort( arr , size )  : 

	for i in range( size-1 ) : 
		
		for j in range( i+1 , size ) :

			if ( arr[ i ] > arr[ j ] ):

				arr[i], arr[j] = arr[j], arr[i]


def printArr(arr, size) :
	print("[ ")
	for i in range(n):
		
		print(arr[i], end = " ")
	print(" ]")

if __name__=='__main__':

	arr = [ 32,45,26,13,67,75,17,96,23,15,52,27,87,35,24,56,78,65,86,48]	

	n = len(arr)
	print("Array_Len:\t",n)
	print("Non-Sorted-Arr :\t")
	printArr(arr, n)

	selectionSort(arr,n)

	print("\nArray in Sorted Order :\t")
	printArr(arr, n)
	print("\n")
	print(arr)





