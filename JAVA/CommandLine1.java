import java.util.Scanner;
class CommandLine1{
        
      
  public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
           String s = sc.next();
           sc.nextLine();
           //get full string with spaces
           String str = sc.nextLine();
            System.out.println(s);
           System.out.println(str);
  }
}