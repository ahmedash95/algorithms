import java.util.Arrays;
import java.util.LinkedHashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {

	
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] numbers = new int[n];
		for(int i = 0; i < n; i++)
			numbers[i] = sc.nextInt();
		for(int i=0; i < n; i++){
			for(int y = 0; y < n;y++){
				if(numbers[y] - 1 ==i){
					System.out.print((y+1)+" ");
					break;
				}
			}
		}
		
		
	}
}
