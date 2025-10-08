import java.util.Scanner;
class Programming{
	 public static int[] FindPrime(int []arr){
		     int ar[] = new int[arr.length];
			 int cnt = 0;
		 for(int i=0;i<arr.length;i++){
			  boolean isPrime = true;
			  for(int j=2;j<=arr[i]/2;j++){
				   if(arr[i]%j == 0){
					   isPrime = false;
					   break;
				   }
			  }
			  if(isPrime){
				  ar[cnt] = arr[i];
				  cnt++;
			  }
		 }
		 return ar;
	 }
public static int [] findOddNumber(int []ans)

{
	int cnt=0;
	int odarr[]= new int[ans.length];
	for(int i=0;i<ans.length;i++)
	{
		if(ans[i]%2!=0)
		{
			 odarr[cnt]=ans[i];
			 cnt++;
		}
		
	}
	return odarr;
}

public static void displayArry(int [] arr)
{
	 for(int i=0;i<arr.length;i++){
			  System.out.println(arr[i]);
		  }
}
	
   public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
		  int size = sc.nextInt();
          int arr[] = new int[size];
          for(int i=0;i<size;i++){
			  arr[i] = sc.nextInt();
		  }       		  
		  
		  displayArry(arr);
		  System.out.println("prime numbers");
		  int ans[] = FindPrime(arr);
		  displayArry(ans);
		 int oddar[]= findOddNumber(ans);
		 displayArry(oddar);
		  
   } 
}