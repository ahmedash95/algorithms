import java.util.Arrays;
import java.util.LinkedHashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {

	
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int cols = 5;
		int rows = 5;
		int diffIndexCol = 0;
		int diffIndexRow = 0;
		int totalMoves = 0;
		for(int i =0; i < cols;i++)
		{
			for(int k =0; k < rows;k++)
			{
				int c = sc.nextInt();
				if(c != 0){
					diffIndexCol = i;
					diffIndexRow = k;
				}
			}
		}
		
		if(diffIndexCol < 2){
			totalMoves +=  2 - diffIndexCol;
		} else if(diffIndexCol > 2){
				totalMoves += diffIndexCol - 2;
		}
		if(diffIndexRow < 2){
			totalMoves += 2 - diffIndexRow;
		} else if(diffIndexRow > 2){
			totalMoves += diffIndexRow - 2;
		}
		System.out.println(totalMoves);
	}
}
