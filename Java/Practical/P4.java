public class P4 {
    public static void main(String[] args) {
        int a[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int b[][] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
        int ans[][] = new int[3][3];
        
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < b[0].length; j++) {
                ans[i][j] = 0;
                for (int k = 0; k < a[0].length; k++) {
                    ans[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        
        for (int i = 0; i < ans.length; i++) {
            for (int j = 0; j < ans[0].length; j++) {
                System.out.print(ans[i][j] + " ");
            }
            System.out.println();
        }
    }
}
