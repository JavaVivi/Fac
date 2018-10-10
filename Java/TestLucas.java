package td4.lucas;

public class TestLucas {
	public static void main(String[] args) {
		Lucas l1 = new Lucas();
		System.out.println(l1);
		l1.remplissage();
		System.out.println(l1);
		Lucas l2 = new Lucas(50);
		System.out.println(l2);
		l2.remplissage();
		System.out.println(l2);
		l2.getRes(5);
		System.out.println(l2);
	}
}
