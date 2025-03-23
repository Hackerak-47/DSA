import java.util.*;

public class LongestConsecutive {
    public static void sortArray(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    public static int longestConsecutive(int[] arr) {
        if (arr.length == 0) return 0;
        
        sortArray(arr);
        int maxLen = 1, currentLen = 1;
        
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] == arr[i - 1] + 1) {
                currentLen++;
            } else if (arr[i] != arr[i - 1]) {
                maxLen = Math.max(maxLen, currentLen);
                currentLen = 1;
            }
        }
        return Math.max(maxLen, currentLen);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the size of the array: ");
        int n = scanner.nextInt();
        
        int[] arr = new int[n];
        System.out.println("Enter elements in the array:");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        
        System.out.println("Longest Consecutive Sequence Length: " + longestConsecutive(arr));
        
        scanner.close();
    }
}
