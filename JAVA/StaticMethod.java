
class StaticMethod{
    
         public void display(){
          System.out.println(" static methodd");           
          }
          public  vod show(){
           System.out.println("non static method");
         }
       
      
  public static void main(String args[]){
       int n = Integer.parseInt(args[0]);
        display();
          //error while calling show method because its non static 
          // show();
  }
}
