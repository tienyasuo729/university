
import java.util.Scanner;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Other/File.java to edit this template
 */

/**
 *
 * @author admin
 */
public class newJavaFile {
       private static final Scanner scanner = new Scanner(System.in);
    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        // TODO code application logic here
        System.out.print("- Nh?p v�o ?�y t�n c?a b?n: ");
        String name = checkIntInPut("^[\\p{L}\\s]+$", "Nh?p sai t�n r?i, xin nh?p l?i: ");
        int age = Integer.parseInt(checkIntInPut("^[0-9]$)", "Kh�ng nh?p ch?, xin vui l�ng nh?p l?i: "));
        System.out.print("- T�n c?a b?n l� : " + name + "\n-Tu?i c?a b?n l�: " + age);
        
    }
     private static String checkIntInPut(String regex, String print) { // ki?m tra d? li?u nh?p v�o c� b? l?i v? c? t�nh nh?p ch? hay v??t ph?m vi int kh�ng { theo regex }
        String input = null;
        boolean check = true;
        do {
            input = scanner.nextLine();
            if (input.matches(regex)){
                check = false;
            }else {
                System.out.print(print);
            }
        }while (check);

        return input;
    }
}
