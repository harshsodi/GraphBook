import java.io.*;
import java.util.*;
import java.util.regex.*;

class Equation {
	
	private String eq;
	private String eqx;
	
	public Equation(String s) {
		this.eq = s;
	}
	
	public void setEq(String e) {
		this.eq = e;
	}
	
	public String getEq() {
		return this.eq;
	}
	
	public void modify() {
// 		this.eq = this.eq.replaceAll("([0-9]*)\\^(x)","($1^$2)");
// 		this.eq = this.eq.replaceAll("(x)","($1)");
		
		this.eq = this.eq.replaceAll("(sin|cos|tan|sqrt)([0-9]+[\\.]?[0-9]*x?)","($1($2))");
		
		this.eq = this.eq.replaceAll("(x)\\^([0-9]+[\\.]?[0-9]*)","($1^$2)");
		this.eq = this.eq.replaceAll("([0-9]+[\\.]?[0-9]*)\\^(x)","($1^$2)");
		
// 		this.eq = this.eq.replaceAll("([0-9]+[\\.]?[0-9]*)(x)","($1$2)");
// 		this.eq = this.eq.replaceAll("(x)([0-9]+[\\.]?[0-9]*)","($1$2)");

		// 		this.eq = this.eq.replaceAll("([0-9]+[\\.]?[0-9]*)\\^(x)","($1^$2)");
		
		this.eq = this.eq.replaceAll("([0-9]+[\\.]?[0-9]*)(x)","($1*$2)");
		this.eq = this.eq.replaceAll("(x)([0-9]+[\\.]?[0-9]*)","($1*$2)");
		
		this.eq = this.eq.replaceAll("(x)/([0-9]+[\\.]?[0-9]*)","($1/$2)");
		this.eq = this.eq.replaceAll("([0-9]+[\\.]?[0-9]*)/(x)","($1/$2)");
		
		this.eq = this.eq.replaceAll("(x)\\*([0-9]+[\\.]?[0-9]*)","($1*$2)");
		this.eq = this.eq.replaceAll("([0-9]+[\\.]?[0-9]*)\\*(x)","($1*$2)");
		
		double ev = 2.17;
		
		this.eq = this.eq.replaceAll("([^A-Za-z])(e)","$1(" + ev + ")");
		this.eq = this.eq.replaceAll("(^e)","(" + ev + ")");
	}
	
	public String putX(double val) {
		this.eqx = this.eq.replaceAll("(x)","(" + val + ")");
		return this.eqx;
	}
	
}
