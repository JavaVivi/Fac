package td4.repertoire;

public class TestRepertoire {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		boolean a;
		Contact b;
		Repertoire r = new Repertoire(3);
		System.out.println(r);
		Contact c1 = new Contact("Siegfried", "06.25.45.12.31", "dragony@mail.com");
		r.ajouter(c1);
		System.out.println(r);
		Contact c2 = new Contact("Kelly", "09.58.45.69.42", "sundownhowling@gmail.com");
		Contact c3 = new Contact("Tuomas", "05.25.47.42.20", "holopainen@mail.com");
		r.ajouter(c2);
		r.ajouter(c3);
		System.out.println(r);
		b = r.getContacts(2);
		System.out.println(r);
		a = r.rechercheNom("Kelly");
		System.out.println(a);
		a = r.rechercheNom("Virginie");
		System.out.println(a);
		System.out.println(b);
	}

}
