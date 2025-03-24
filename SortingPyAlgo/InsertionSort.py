#InsertionSorting Algorithm .....

def InserttionSort(arr, size ) : 
	
	for i in range( size ) : 

		value = arr[i]
		index = i 
		
		while ( index > 0 and arr[index-1] > value ):

			arr[index] = arr[index-1]
			index -= 1

		arr[index] = value 


if __name__=='__main__':

	arr = [ 32,45,26,13,67,75,17,96,23,15,52,27,87,35,24,56,78,65,86,48]	

	n = len(arr)
	print("Array_Len:\t",n)
	print("Non-Sorted-Arr :\t")
	print(arr)

	InserttionSort(arr,n)

	print("\nArray in Sorted Order :\t")
	print(arr)
	print("\n")
	print(arr)
	
print("\n")