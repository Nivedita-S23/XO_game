import java.util.Scanner;

public class TicTacToe {
    static char[] a = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char mark;
        int i, choice, player = 1;
        
        do {
            creating();
            player = (player % 2 == 1) ? 1 : 2;
            System.out.print("Player " + player + " enter number: ");
            choice = scanner.nextInt();
            
            mark = (player == 1) ? 'X' : 'O';
            marking(choice, mark);
            i = checking();
            player++;
        } while (i == -1);
        
        creating();
        
        if (i == 1) {
            System.out.println("Congratulations");
            System.out.println("Player " + (player - 1) + " has won the match!");
        } else {
            System.out.println("Match draw");
        }
        
        scanner.close();
    }
    
    static void creating() {
        System.out.println(" TIC TAC ");
        System.out.println(" " + a[1] + " | " + a[2] + " | " + a[3]);
        System.out.println("-----------");
        System.out.println(" " + a[4] + " | " + a[5] + " | " + a[6]);
        System.out.println("-----------");
        System.out.println(" " + a[7] + " | " + a[8] + " | " + a[9]);
    }
    
    static void marking(int choice, char mark) {
        if (choice >= 1 && choice <= 9 && a[choice] == (char) (choice + '0')) {
            a[choice] = mark;
        } else {
            System.out.println("Invalid move, try again.");
        }
    }
    
    static int checking() {
        int[][] winPositions = {
            {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, // Rows
            {1, 4, 7}, {2, 5, 8}, {3, 6, 9}, // Columns
            {1, 5, 9}, {3, 5, 7}             // Diagonals
        };
        
        for (int[] pos : winPositions) {
            if (a[pos[0]] == a[pos[1]] && a[pos[1]] == a[pos[2]]) {
                return 1;
            }
        }
        
        for (int i = 1; i <= 9; i++) {
            if (a[i] == (char) (i + '0')) {
                return -1; // Game is still ongoing
            }
        }
        
        return 0; // Draw
    }
}
