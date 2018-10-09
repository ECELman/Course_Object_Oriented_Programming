
public class HW2 {

	public static void main(String[] args) {
		
		Engine e1 = new Engine("ENG-01",1489);
		Car car1 = new Car("AB-1234",4,e1);
		String str1 = car1.get_pltno();
		str1 += ","+car1.get_door();
		str1 += ","+car1.get_engine().get_eno();
		str1 += ","+car1.get_engine().get_cc();
		System.out.println(str1);

	}

}

class Car
{
	private String pltno = "";
	private int door = 4;
	Engine engine;
	Car(String t1, int t2, Engine e1)
	{
		pltno = t1;
		door = t2;
		engine = e1;
	}
	public String get_pltno() { return pltno; }
	public int get_door() { return door; }
	public Engine get_engine() { return engine; }
}

class Engine
{
	private String eno = "";
	private int cc = 0;
	Engine(String e1, int e2)
	{
		eno = e1;
		cc = e2;
	}
	public String get_eno() { return eno; }
	public int get_cc() { return cc; }
}
