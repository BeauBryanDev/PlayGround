#BinaryHeap_Sort.....

def BuildHeap(arr, size):

    i = size // 2
    for i in reversed(range(0,size // 2)):
        Heapify(arr,i,size)

def Heapify(arr, index, size):

    left = 2 * index + 1
    right = left + 1
    max = index
    if left <= size and arr[left] > arr[max]:
        max = left
    if right <= size and arr[right] > arr[max]:
        max = right
    if index != max:
        arr[max], arr[index] = arr[index], arr[max]
        Heapify(arr,max,size)

def HeapSort(arr, size):
    
    BuildHeap(arr,size)

    while size > 0:
        arr[0], arr[size] = arr[size], arr[0]
        size -= 1
        Heapify(arr,0,size)
 
if __name__ == "__main__":

    arr = [ 32,45,26,13,67,75,17,96,23,15,52,27,87,35,24,56,78,65,86,48];
    n = len(arr)
    HeapSort(arr,n-1)
    print("Array in sorted order : ")
    for i in range(len(arr)):
        print(arr[i], end = " ")
 
