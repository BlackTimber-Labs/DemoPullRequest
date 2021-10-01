import java.util.Scanner;
public class reverse_string
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the string");
        String str = in.nextLine(); 
        String s[] = str.split(" ");
        String rev = "";
        for (int i = s.length - 1; i >= 0; i--)
        {
            rev = rev + s[i] + " ";
        }
        System.out.println("Reversed String:");
        System.out.println(rev);
    }
}