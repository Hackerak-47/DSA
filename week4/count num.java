import java.util.*;

public class CountSubarraysXOR {
    public static int countSubarraysWithXOR(int[] arr, int B) {
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            int xorSum = 0;
            for (int j = i; j < arr.length; j++) {
                xorSum ^= arr[j];
                if (xorSum == B) {
                    count++;
                }
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the size of the array: ");
        int n = scanner.nextInt();
        
        int[] arr = new int[n];
        System.out.println("Enter elements of the array:");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        
        System.out.print("Enter the target XOR value (B): ");
        int B = scanner.nextInt();
        
        int result = countSubarraysWithXOR(arr, B);
        System.out.println("Total subarrays with XOR = " + B + ": " + result);
        
        scanner.close();
    }
}
