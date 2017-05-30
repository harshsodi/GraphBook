import java.io.*;
import java.util.*;
import java.util.regex.*;

public class Test {

	private FileOutputStream fout;
	private FileOutputStream fout2;
	private BufferedReader in;

	public native void displayHelloWorld(String num);
	static {
		System.loadLibrary("test");
	}
	
	private int scale;
	
	public Test() {
	
	}
	
	public Test(int scale) {
		this.scale = scale;
	}

	public double[] getMF(Equation e, int alignX, int alignY) {
		
		e.modify();
		System.out.println(e.getEq());
		
		double[] ou = new double[1001];
		double x = 0;
		int i= 0;
		
		try {
			fout = new FileOutputStream("inp");
			PrintWriter write = new PrintWriter(fout,true);
			for(x=0;x<=1000;x=x+1) {
				write.println(e.putX((x-500-alignX)/scale));
			}
		}
		catch(Exception sas) {
		
		}
		
				
				new Test().displayHelloWorld("./final < inp > opt");
				String input;
				try {
					in = new BufferedReader(new FileReader("opt"));
					while(true) {
						input = in.readLine();
						if(input == null) {
							break;
						}
						
						if(input.equals("nan") || input.equals("-nan") || input.equals("-inf") ) {
							ou[i++] = 0.0;
						}
						else {
							ou[i++] = Double.parseDouble(input);
						}
					}
				}
				catch(Exception easa) {
				
				}
				
			/*	
				if(output.isNaN()) {
					output = 1.0;
				}*/
// 				System.out.println(output);
// 				ou[i++] = output;
		
		return ou;
	}
}