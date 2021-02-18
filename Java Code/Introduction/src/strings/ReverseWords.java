package strings;
import java.util.Scanner;
public class ReverseWords {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String input=sc.nextLine();
		String[] arr=input.split(" ");
		String[] revArray=new String[arr.length];
		for(int i=arr.length-1;i>=0;i--) {
			//arr[arr.length-i-1].trim();
			revArray[i]=arr[arr.length-1-i].trim();
		}
		for(String item:revArray) {
			System.out.print(item+" ");
		}
	}

}
