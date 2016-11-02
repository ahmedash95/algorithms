import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String line = sc.nextLine();
		String target = "hello";
		String received = "";
		int cur = 0;
		
		for(int i = 0; i < line.length(); i++)
		{
			if(cur <= 4 && line.length() > cur){
				if(target.charAt(cur) == line.charAt(i)){
					received += line.charAt(i);
					cur++;
				}
			}	
		}
		System.out.println(received.equals(target) ? "YES" : "NO");
	}
}


