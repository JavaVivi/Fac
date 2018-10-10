package td4.segment2;

public class TestEnsemble {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Ensemble e = new Ensemble(5);
		System.out.println(e);
		Point p1 = new Point(2,5);
		e.ajouter(p1);
		System.out.println(e);
		PointColore p2 = new PointColore(1,5, 123);
		e.ajouter(p2);
		System.out.println(e);
		Point p3 = new PointColore(2,5,123);
		e.ajouter(p3);
		System.out.println(e);
		Point p4 = new Point(10,5);
		Point p5 = new Point(8,5);
		e.ajouter(p4);
		e.ajouter(p5);
		System.out.println(e);
		e.translater(1, 1);
		System.out.println(e);
	}

}
