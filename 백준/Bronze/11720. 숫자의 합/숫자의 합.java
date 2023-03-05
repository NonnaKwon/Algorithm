import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int num = Integer.parseInt(br.readLine());
		if(num < 1 || num > 100) {
			return;
		}
		
		String inputNum = br.readLine();
		if(inputNum.length() != num) {
			return;
		}
		
		int sum =0;
		for(int i=0;i<num;i++) {
			sum += inputNum.charAt(i) - '0';
		}
		
		System.out.println(sum);
		
		br.close();
	}
}
