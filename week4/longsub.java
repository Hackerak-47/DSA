import java.util.*;

public class LongestUniqueSubstring {
    public static int longestUniqueSubstring(String str) {
        int maxLength = 0;
        int n = str.length();

        for (int i = 0; i < n; i++) {
            boolean[] visited = new boolean[256];
            int length = 0;
            
            for (int j = i; j < n; j++) {
                if (visited[str.charAt(j)]) 
                    break;

                visited[str.charAt(j)] = true; 
                length++;
                
                maxLength = Math.max(maxLength, length); 
            }
        }
        return maxLength;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a string: ");
        String str = scanner.next();
        
        System.out.println("Longest unique substring length: " + longestUniqueSubstring(str));
        
        scanner.close();
    }
}
