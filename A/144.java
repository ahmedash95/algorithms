import java.util.Scanner;

public class Main {

	public static int getMax(int[] x, int limit) {
		int maxIndex = 0, maxVal = x[0];
		for (int i = 0; i < limit; i++)
			if (maxVal < x[i]) {
				maxVal = x[i];
				maxIndex = i;
			}
		return maxIndex;

	}

	public static int getMin(int[] x, int limit) {
		int minIndex = 0, minVal = x[0];
		for (int i = 0; i < limit; i++)
			if (minVal >= x[i]) {
				minVal = x[i];
				minIndex = i;
			}
		return minIndex;
	}

	public static void main(String[] args) {
		boolean sub = false;
		int[] hieghts = new int[100];
		Scanner scan = new Scanner(System.in);
		int sold = scan.nextInt();
		for (int i = 0; i < sold; i++)
			hieghts[i] = scan.nextInt();
		int smallIndex = getMin(hieghts, sold);
		int bigIndex = getMax(hieghts, sold);

		if (smallIndex < bigIndex)
			sub = true;
		int moves = Math.abs(sold - 1 - smallIndex) + Math.abs(0 - bigIndex);
		if (sub)
			System.out.println(moves - 1);
		else
			System.out.println(moves);

	}

}
