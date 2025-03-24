//Heapify the IInd ...


class BinaryHeap {
    public void BuildHeap(int[] arr, int size) {
        int i = size / 2;

        for (; i >= 0; i--) {
            Heapify(arr, i, size);
        }
    }

    public void Heapify(int[] arr, int index, int size) {
        int left = 2 * index + 1;
        int right = left + 1;

        int max    = index;

        if (left <= size && arr[left] > arr[max]) {
            max = left;
        }

        if (right <= size && arr[right] > arr[max]) {
            max = right;
        }

        if (index != max) {
            swap(arr, index, max);
            Heapify(arr, max, size);
        }
    }

    public  void DeleteMax() {
        swap(arr, 0, size - 1);
        System.out.println("MAX=:\t" + arr[size - 1]);
        size--;
        Heapify(arr, 0, size);
    }

    public void print(int[] arr, int size) {
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public void swap(int[] arr, int  i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static void main(String args[])   
 {
        BinaryHeap obj = new BinaryHeap();
        int[] arr = {10, 20, 40, 30, 80, 60, 50};
        System.out.println("The Array Elements Are:");
        obj.print(arr, arr.length);
        System.out.println("Constructing Heap...");
        obj.BuildHeap(arr, arr.length - 1);
        System.out.println("The Array Elements Are:");
        obj.print(arr, arr.length);
    }
}



