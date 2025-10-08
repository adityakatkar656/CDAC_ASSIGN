import java.util.Scanner;
class CommandLine{
        public static void printTable(int n){
            for(int i=1;i<=10;i++){
               System.out.println(n + "*" + i + " " + (n*i));
         }
       }
      
  public static void main(String args[]){
       int n = Integer.parseInt(args[0]);
        printTable(n);
       
  }
}