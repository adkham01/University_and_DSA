import java.util.ArrayList;
import java.util.List;

public class MergeSort {

    public static void mergeSort(int[] array, int low, int high) {
        // Base Case
        if (low >= high) {
            return;
        }

        int mid = (low + high) / 2;

        // Left half
        mergeSort(array, low, mid);

        // Right half
        mergeSort(array, mid + 1, high);

        // Merge the two halves
        merge(array, low, mid, high);
    }

    public static void merge(int array[], int low, int mid, int high) {
        List<Integer> temp = new ArrayList<>(); // Temporary array
        int left = low;      // Starting index of the left half of array
        int right = mid + 1; // Starting index of the right half of array

        // Sorting elements into the temporary array in a sorted manner
        while (left <= mid && right <= high) {
            if (array[left] <= array[right]) {
                temp.add(array[left]);
                left++;
            } else {
                temp.add(array[right]);
                right++;
            }
        }

        // If elements on the left half are still left
        while (left <= mid) {
            temp.add(array[left]);
            left++;
        }

        // If elements on the right half are still left
        while (right <= high) {
            temp.add(array[right]);
            right++;
        }

        // Copy the sorted elements back into the original array
        for (int i = low; i <= high; i++) {
            array[i] = temp.get(i - low);
        }
    }

    public static void main(String[] args) {
        int[] array = {38, 27, 43, 3, 9, 82, 10};
        int low = 0;
        int high = array.length - 1;
        mergeSort(array, low, high);

        // Print the sorted array
        for (int num : array) {
            System.out.print(num + " ");
        }
    }
}
