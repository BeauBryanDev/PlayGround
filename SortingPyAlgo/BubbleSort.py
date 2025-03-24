#Bubble >Sorting Alorithm ...

def bubbleSort(arr, size) :

	for i in range( size-1 ):

		flg = 0
		
		for j in range( size-1-i ) :
			
			if ( arr[j] > arr[j+1] ) :
			
				arr[j], arr[j+1] = arr[j+1], arr[j]

				flg = 1

		if ( flg == 0):

			break


if __name__=='__main__':


	arr = [ 45,67,86,36,13,78,94,56,34,17,81,32,48,52,24,15,79,85,35,19,27,84]
	n   = len(arr) 
	print("Len of Arr:\t",n)
	print(arr)
	bubbleSort(arr,n)
	print("\nSorted Array : \n")
	print(arr)
