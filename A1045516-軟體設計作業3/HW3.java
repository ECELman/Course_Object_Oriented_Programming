
public class HW3 {

	public static void main(String[] args) {
		
		A a1 = new B();
		RA(a1);
		//B b = new B();
		//System.out.print(b.get_a("2"));

	}
	
	private static void RA(A a) {
		System.out.print(a.get_a());
	}

}

class A {
	private int a = 7;
	public int get_a() { return a; }
}

class B extends A {
	public int get_a() { return 9; }
	public int get_a(int a1) { return a1+9; }
	public int get_a(String a1) { return 12; }
}

class C extends A {
	public int get_a() { return 10; }
	public int get_a(int a1) { return a1+10; }
	public int get_a(String a1) { return 13; }
}