
public class first {
	
	static public void main(String args[]) {

		
		int year=2012;
		if(((year %4==0) && (year %100!=0 )) || (year %400 ==0)){
			System.out.println("It is leap year");
			
		}
		else {
			System.out.println("It is not leap year");
		}
	}
}
