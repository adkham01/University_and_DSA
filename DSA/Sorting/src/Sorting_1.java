package src;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Sorting_1 {
    static void main() {
        int[] array = {13, 46, 24, 52, 20, 9};

        IO.println(Arrays.toString(selectionSort(array.clone())));
        IO.println(Arrays.toString(bubbleSort(array.clone())));
        IO.println(Arrays.toString(insertionSort(array.clone())));
        IO.println(Arrays.toString(mergeSort(array.clone())));
        IO.println(Arrays.toString(quickSort(array.clone())));

    }

    /**
     * Selection Sort
     * Sorts via iterative element swapping
     * Time Complexity:
     * Best Case: O(n^2)
     * Worst Case: O(n^2)
     * @param array unsorted array
     * @return sorted array
     */
    static int[] selectionSort(int[] array){
        for(int i = 0; i < array.length - 1; i++){
            int mini = i;
            for(int j = i; j < array.length; j++){
                if(array[j] < array[mini]){
                    mini = j;
                }
            }
            int temp = array[mini];
            array[mini] = array[i];
            array[i] = temp;

        }
        return array;
    }

    /**
     * Bubble Sort
     * Pushes a maximum element to the end of the array,
     * that is why array[j] > array[i]
     * Time Complexity:
     * Best Case: O(n)
     * Worst Case: O(n^2)
     * @param array imaginary array
     * @return array
     */
    static int[] bubbleSort(int[] array){
        for(int i = array.length - 1; i >= 1; i--){
            boolean flag = false;
            for(int j = 0; j <= i - 1; j++){
                if(array[j] > array[i]){
                    int temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                    flag = true;
                }
            }
            if(flag){
                return array;
            }
        }
        return array;
    }

    /**
     * Insertion Sort
     * Sorts via iterative pairwise element swapping
     * Time Complexity:
     * Best Case: O(n)
     * Worst Case: O(n^2)
     * @param array unsorted array
     * @return sorted array
     */
    static int[] insertionSort(int[] array){
        for(int i = 1; i < array.length; i++){
            int j = i;
            while(j > 0 && array[j] < array[j-1]){
                int temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
                j--;
            }
        }
        return array;
    }

    /**
     * Merge Sort
     * Sorts the array recursively
     * Time Complexity:
     * Best Case: O(n log n)
     * Worst Case: O(n log n)
     * @param array unsorted array
     * @return sorted array
     */
    static int[] mergeSort(int[] array){
        class MergeSort{
            void mergeSort(int[] array, int low, int high){
                if(low == high) return;
                int mid = (low + high) / 2;
                mergeSort(array, low, mid);
                mergeSort(array, mid + 1, high);
                merge(array, low, mid, high);
            }
            void merge(int[] array, int low, int mid, int high){
                List<Integer> temp = new ArrayList<>();
                int left = low;
                int right = mid + 1;
                while (left <= mid && right <= high){
                    if(array[left] <= array[right]){
                        temp.add(array[left]);
                        left++;
                    }
                    else {
                        temp.add(array[right]);
                        right++;
                    }
                }
                while (left <= mid){
                    temp.add(array[left]);
                    left++;
                }
                while (right <= high){
                    temp.add(array[right]);
                    right++;
                }
                for (int i = 0; i < temp.size(); i++) {
                    array[low + i] = temp.get(i);
                }
            }
        }
        new MergeSort().mergeSort(array, 0, array.length - 1);
        IO.println("Merge Sort:");
        return array;
    }

    /**
     * Quick Sort
     * Recursively sorts subpartitions until complete
     * Time Complexity:
     * Best Case: O(n log n)
     * Worst Case: O(n^2)
     * @param array unsorted array
     * @return sorted array
     */
    static int[] quickSort(int[] array){
        class QuickSort{
            void quickSort(int[] array, int low, int high){
                if(low < high){
                   int partIndex = partition(array, low, high);
                   quickSort(array, low, partIndex - 1);
                   quickSort(array, partIndex + 1, high);
                } 
            }
            
            int partition(int[] array, int low, int high){
                int pivot = array[low];
                int i = low;
                int j = high;
                
                while(i < j){
                    while(array[i] <= pivot && i <= high -1){
                        i++;
                    }
                    
                    while(array[j] > pivot && j >= low + 1){
                        j--;
                    }
                    if(i < j) swap(array, i, j);
                }
                swap(array, low, j);
                return j;
            }

            void swap(int[] array, int i, int j){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }

        }

        new QuickSort().quickSort(array, 0, array.length - 1);
        IO.println("Quick Sort:");
        return array;
    }
}
