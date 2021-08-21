
//public class JavaBase {
//
//}

import java.util.*;

class AllMethod{
	
	void ArrayMethod() {
		int[] a=new int[5];
		a[1]=324;
		//declare and initialize and array
		int[] age = {12, 4, 5, 2, 5};
	}
	
	void CharString() {
		char letter='A';
		
		//convert  char to string
		//String s=String.valueOf(letter);  
		
		String txt = "Hello World";
		System.out.println(txt.toUpperCase());   // Outputs "HELLO WORLD"
		System.out.println(txt.toLowerCase());   // Outputs "hello world"
	}
	
	static int cube(int x) {
		return x*x*x;
	}
	
	void message() {
		System.out.println("Through Parent class Object");
	}
	
	void add(int a,int b) { //overloading example
		System.out.println("add Method "+a+" "+b);
	}
	
	void add(int a,int b,int c) { //overloading example
		System.out.println("add Method " +a+" "+b+" "+c);
	}
	
}
class JavaBase extends AllMethod{
	static String college="Pilot";
	int id=11;
	String name;
	
	
	//	void Insertmethod(int id , String n) {
	//		id=id;
	//		name=n;
	//	}
	
	JavaBase(int id,String name){
		this.id=id;
		this.name=name;
		
	}
	
	void display() {
		System.out.println(id+" "+ name +" college ");
	}


	public static void main( String args[]) {
		
	JavaBase obj=new JavaBase(101,"saiful");
	AllMethod addOBJ=new AllMethod();
	
	//Overloading Example
	addOBJ.add(10, 14);
	
	//obj.name="saiful";
	//obj.Insertmethod(101,"saiful ");
	
	obj.display();
	
	//Parent class object Creation
	AllMethod objparent=new AllMethod();
	objparent.message();
	
	//static method execution
	int cuberesult=JavaBase.cube(5);
	System.out.println(cuberesult);
	
	// CharString Method
	System.out.println("CharString Method");
	AllMethod objCharString=new AllMethod();
	objCharString.CharString();
	
	
	
		
	}
}



