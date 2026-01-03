package parametrizedandfunctional;

import java.util.Arrays;

public class ReverseArray {
    static void main() {
        int[] arr = {2, 6, 7, 1, 8, 3};
        IO.println(Arrays.toString(reverse(arr, 0, arr.length - 1)));
        IO.println(Arrays.toString(reverse2(arr)));
        String word = "madam";
        IO.println(isPalindrome(word));
        IO.println(isPalindrome2(word, 0));
    }

    static int[] reverse(int[] arr, int start, int end) {
        if (start >= end) return arr;

        int tem = arr[start];
        arr[start] = arr[end];
        arr[end] = tem;
        return reverse(arr, start + 1, end - 1);
    }
    
    static int[] reverse2(int[] arr){
        int end = arr.length;
        
        for(int i = 0; i < end; i++){
            end = end - 1;    
            if(!(i >= end)){
                int temp = arr[i];
                arr[i] = arr[end];
                arr[end] = temp;
            }

        }
        return arr;
    }
    
    static boolean isPalindrome(String word){
        int end = word.length();
        
        for(int i = 0; i < end; i++){
            end = end-1;
            if(!(i >= end)){
                if(word.charAt(i) != word.charAt(end)){
                    return false;
                }
            } 
        }
        return true;    
    }
    
    static boolean isPalindrome2(String word, int start){
        if(start >= word.length()/2) return true;
        if(word.charAt(start) != word.charAt(word.length()-start-1)) return false;
        return isPalindrome2(word, start + 1);
    }


}
