/*
 * user: zFa3
 * date: 10-06-24
 * task: MeaningMean
 */
import java.util.Scanner;
import java.util.*;

public class A2021_CF_MeaningMean {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		while (t != 0){
			int n = input.nextInt();
			int[] arr = new int[n];
			for (int i = 0; i < n; i++){
				arr[i] = (input.nextInt());
			}
			Arrays.sort(arr);
			int p1 = 1;
			int accum = arr[0];
			while (p1 < arr.length){
				accum += arr[p1];
				accum /= 2;
				// System.out.println(accum);
				p1++;
			}
			System.out.println(accum);
			t--;
		}
		input.close();
	}
}