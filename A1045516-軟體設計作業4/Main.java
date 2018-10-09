
public class Main {

	public static void main(String[] args) {
		
		SelectionSorter s = new SelectionSorter();
		QuickSorter q = new QuickSorter();
		IntArray values = new IntArray();
		sort(values,s);
		sort(values,q);

	}
	
	private static void sort(IntArray values, Sorter sorter) {
		values.getInput(10);
		values.printOutput();
		values.setSorter(sorter);
		values.sort();
		System.out.print("=>");
		values.printOutput();
		values.cleanUp();
	}

}
