import java.util.Arrays;
import java.util.LinkedHashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {

	
	
	public static void main(String[] args) {
		
		Scanner cs = new Scanner(System.in);
		int lucky []={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
		int number = cs.nextInt();
		boolean isLucky = false;
		for(int i = 0; i < 14; i++)
		{
			if ((number % lucky[i])==0){
	            isLucky= true;
	        }
		}
		System.out.println(isLucky ? "YES" : "NO");
		
	}
}

