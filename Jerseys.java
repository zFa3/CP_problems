package review;

import java.util.HashMap;
import java.util.Scanner;

public class Jerseys {

	static Scanner input = new Scanner(System.in);

	public static void main(String args[]) {
		int jerseys = input.nextInt();
		int athletes = input.nextInt();
		String wantedSize;
		int wantedNum;
		
		String[] sizes = new String[jerseys];
		boolean[] availableJerseys = new boolean[jerseys]; 
		for (int i=0; i<jerseys; i++) availableJerseys[i] = true;
		int answer = 0;
		
		HashMap<String, Integer> mapping = new HashMap<String, Integer>() {{
			put("S", 0);
			put("M", 1);
			put("L", 2);
		}};
		
		input.nextLine();
		for (int i = 0; i < jerseys; i++) {
			sizes[i] = input.nextLine();
		}
		
		for (int i=0; i<athletes; i++) {
			String request = input.nextLine();
			wantedSize = request.split(" ")[0];
			wantedNum = Integer.parseInt(request.split(" ")[1]);
			
			if (availableJerseys[wantedNum-1] && mapping.get(wantedSize) <= mapping.get(sizes[wantedNum-1])) {
				answer++;
				availableJerseys[wantedNum-1] = false;
			}
			
		}
		
		System.out.println(answer);
		
	}
}
/*
4
3
M
S
S
L
L 3
S 3
L 1
*/
