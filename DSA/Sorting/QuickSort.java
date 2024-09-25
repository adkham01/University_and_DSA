public class QuickSort {
    public static void main(String args[]) {
        int[] array = {8, 2, 5, 2, 3, 9, 4, 7, 6, 1};

        quickSort(array, 0, array.length - 1);

        for (int i : array) {
            System.out.print(i + "\t");
        }
    }

    private static void quickSort(int[] array, int start, int end) {
        if (end <= start) {
            // Base case: array of length 1 or invalid range
            return;
        }

        // Choose a random pivot and swap with the end element
        int pivotIndex = partition(array, start, end);
        swap(array, pivotIndex, end);

        // Partition the array around the pivot
        int pivot = partition(array, start, end);

        // Recursively sort the left and right partitions
        quickSort(array, start, pivot - 1);
        quickSort(array, pivot + 1, end);
    }

    private static int partition(int[] array, int start, int end) {
        int pivot = array[end];
        int i = start - 1;

        for (int j = start; j <= end - 1; j++) {
            if (array[j] <= pivot) {  // Also handle equal elements
                i++;
                swap(array, i, j);
            }
        }

        // Place the pivot in the correct position
        swap(array, i + 1, end);

        return i + 1;  // Return the final index of the pivot
    }

    private static void swap(int[] array, int i, int j) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
