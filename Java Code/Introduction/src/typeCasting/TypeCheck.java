package typeCasting;
import java.util.Scanner;
public class TypeCheck {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		Scanner sc=new Scanner(System.in);
//		int principal=sc.nextInt();
//		float rate=sc.nextFloat();
//		int time=sc.nextInt();
//		
//		System.out.println(principal*rate*time/100+"->my interest");
//		Scanner sc=new Scanner(System.in);
//		int n=sc.nextInt();
//		int ans=1;
//		for(int i=1;i<=n;i++) {
//			ans*=i;
//		}
//		System.out.println(ans);
		// simple calculator
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter two numbers");
		int a=sc.nextInt();
		int b=sc.nextInt();
		System.out.println("Enter operation");
		sc.nextLine();
		char operation=sc.nextLine().charAt(0);
		int result=0;
		switch(operation) {
		case '+': result=a+b;break;
		case '-':result=a-b;break;
		case '*':result=a*b;break;
		case '/':result=a/b;break;
		default: System.out.println("Invalid");
		}
		System.out.println(result);
		
	}
}
